#include "visual.h"

void visual::showMap(std::vector<std::vector<char>> map)
{

	for (auto it : snake) {
		map[it.y][it.x] = SNAKE_TAIL;
		//ошибка выход за карту
	}
	map[snake.begin()->y][snake.begin()->x] = SNAKE_FACE;
	for (int i = 0; i < map.size(); i++) {
		for (int j = 0; j < map[i].size(); j++) {
			std::cout << map[i][j];
		}
		std::cout << "\n";
	}
	for (auto it : snake) {
		map[it.y][it.x] = SPACE_MAP;
	}
}

void visual::createMap(size_t height, size_t width)
{
	for (int i = 0; i < height; i++) {
		std::vector <char> temp;
		for (int j = 0; j < width; j++) {
			temp.push_back(SPACE_MAP);
		}
		map.push_back(temp);
		temp.clear();
	}
}
