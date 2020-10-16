# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

# Default target executed when no arguments are given to make.
default_target: all

.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/sun/Git/bullet

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/sun/Git/bullet

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake --regenerate-during-build -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake cache editor..."
	/usr/bin/ccmake -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/sun/Git/bullet/CMakeFiles /home/sun/Git/bullet//CMakeFiles/progress.marks
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/sun/Git/bullet/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named bullet

# Build rule for target.
bullet: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 bullet
.PHONY : bullet

# fast build rule for target.
bullet/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/bullet.dir/build.make CMakeFiles/bullet.dir/build
.PHONY : bullet/fast

classes/Player.o: classes/Player.cpp.o

.PHONY : classes/Player.o

# target to build an object file
classes/Player.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/bullet.dir/build.make CMakeFiles/bullet.dir/classes/Player.cpp.o
.PHONY : classes/Player.cpp.o

classes/Player.i: classes/Player.cpp.i

.PHONY : classes/Player.i

# target to preprocess a source file
classes/Player.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/bullet.dir/build.make CMakeFiles/bullet.dir/classes/Player.cpp.i
.PHONY : classes/Player.cpp.i

classes/Player.s: classes/Player.cpp.s

.PHONY : classes/Player.s

# target to generate assembly for a file
classes/Player.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/bullet.dir/build.make CMakeFiles/bullet.dir/classes/Player.cpp.s
.PHONY : classes/Player.cpp.s

classes/helpers/ColorHelper.o: classes/helpers/ColorHelper.cpp.o

.PHONY : classes/helpers/ColorHelper.o

# target to build an object file
classes/helpers/ColorHelper.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/bullet.dir/build.make CMakeFiles/bullet.dir/classes/helpers/ColorHelper.cpp.o
.PHONY : classes/helpers/ColorHelper.cpp.o

classes/helpers/ColorHelper.i: classes/helpers/ColorHelper.cpp.i

.PHONY : classes/helpers/ColorHelper.i

# target to preprocess a source file
classes/helpers/ColorHelper.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/bullet.dir/build.make CMakeFiles/bullet.dir/classes/helpers/ColorHelper.cpp.i
.PHONY : classes/helpers/ColorHelper.cpp.i

classes/helpers/ColorHelper.s: classes/helpers/ColorHelper.cpp.s

.PHONY : classes/helpers/ColorHelper.s

# target to generate assembly for a file
classes/helpers/ColorHelper.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/bullet.dir/build.make CMakeFiles/bullet.dir/classes/helpers/ColorHelper.cpp.s
.PHONY : classes/helpers/ColorHelper.cpp.s

classes/helpers/DrawHelper.o: classes/helpers/DrawHelper.cpp.o

.PHONY : classes/helpers/DrawHelper.o

# target to build an object file
classes/helpers/DrawHelper.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/bullet.dir/build.make CMakeFiles/bullet.dir/classes/helpers/DrawHelper.cpp.o
.PHONY : classes/helpers/DrawHelper.cpp.o

classes/helpers/DrawHelper.i: classes/helpers/DrawHelper.cpp.i

.PHONY : classes/helpers/DrawHelper.i

# target to preprocess a source file
classes/helpers/DrawHelper.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/bullet.dir/build.make CMakeFiles/bullet.dir/classes/helpers/DrawHelper.cpp.i
.PHONY : classes/helpers/DrawHelper.cpp.i

classes/helpers/DrawHelper.s: classes/helpers/DrawHelper.cpp.s

.PHONY : classes/helpers/DrawHelper.s

# target to generate assembly for a file
classes/helpers/DrawHelper.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/bullet.dir/build.make CMakeFiles/bullet.dir/classes/helpers/DrawHelper.cpp.s
.PHONY : classes/helpers/DrawHelper.cpp.s

main.o: main.cpp.o

.PHONY : main.o

# target to build an object file
main.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/bullet.dir/build.make CMakeFiles/bullet.dir/main.cpp.o
.PHONY : main.cpp.o

main.i: main.cpp.i

.PHONY : main.i

# target to preprocess a source file
main.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/bullet.dir/build.make CMakeFiles/bullet.dir/main.cpp.i
.PHONY : main.cpp.i

main.s: main.cpp.s

.PHONY : main.s

# target to generate assembly for a file
main.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/bullet.dir/build.make CMakeFiles/bullet.dir/main.cpp.s
.PHONY : main.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... edit_cache"
	@echo "... rebuild_cache"
	@echo "... bullet"
	@echo "... classes/Player.o"
	@echo "... classes/Player.i"
	@echo "... classes/Player.s"
	@echo "... classes/helpers/ColorHelper.o"
	@echo "... classes/helpers/ColorHelper.i"
	@echo "... classes/helpers/ColorHelper.s"
	@echo "... classes/helpers/DrawHelper.o"
	@echo "... classes/helpers/DrawHelper.i"
	@echo "... classes/helpers/DrawHelper.s"
	@echo "... main.o"
	@echo "... main.i"
	@echo "... main.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

