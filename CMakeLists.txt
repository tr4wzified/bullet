cmake_minimum_required(VERSION 3.10)

INCLUDE(FindPkgConfig)

project(bullet)

# C++ 17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

file(GLOB SOURCES
	classes/*.hpp
	classes/*.cpp
	classes/helpers/*.hpp
	classes/helpers/*.cpp
)

find_package(SDL2 REQUIRED)
find_package(SDL2_image REQUIRED)
find_package(SDL2_ttf REQUIRED)
find_package(SDL2_gfx REQUIRED)

include_directories(${SDL2_INCLUDE_DIRS} ${SDL2_IMAGE_DIRS} ${SDL2_TTF_DIRS})

include_directories("classes/")
include_directories("classes/helpers/")


add_executable(bullet WIN32 main.cpp ${SOURCES})
add_custom_command(TARGET bullet PRE_BUILD
	COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_SOURCE_DIR}/cfg/colors.ini
	${CMAKE_RUNTIME_OUTPUT_DIRECTORY}
)
target_link_libraries(bullet ${SDL2_LIBRARIES} ${SDL2_IMAGE_LIBRARIES} ${SDL2_TTF_LIBRARIES} ${SDL_GFX_LIBRARIES})
