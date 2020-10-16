#include "ColorHelper.hpp"
#include <SDL2/SDL.h>
std::vector<SDL_Color> Bullet::ColorHelper::ReadColorsFromFile(const std::string path) {
	std::ifstream file;
	std::vector<SDL_Color> colorCollection;
	file.open(path, std::ios::in);
	if (file) {
		if (file.is_open()) {
			std::string line;
			int i = 0;
			while (getline(file, line) && i < 16) {
				if (line[0] == '#') line.erase(0, 1);
				if (line.length() == 6) {
					SDL_Color tempColor;
					for(int j = 0; j < 6; j++) {
						std::string hex(1, line[j]);
						j++;
						hex.push_back(line[j]);
						SDL_Log("Parsing %s at pos %d", hex.c_str(), j);
						switch(j) {
							case 1:
								tempColor.r = std::stoi(hex, 0, 16);
								break;
							case 3:
								tempColor.g = std::stoi(hex, 0, 16);
								break;
							case 5:
								tempColor.b = std::stoi(hex, 0, 16);
								break;
						}
						tempColor.a = 255;
					}
					colorCollection.push_back(tempColor);
				}
				i++;
			}
			file.close();
		}
		else std::cerr << "ERROR: Failed to open file at " << path << std::endl;
	}
	else std::cerr << "ERROR: Path " << path << " does not exist!" << std::endl;
	return colorCollection;
}
