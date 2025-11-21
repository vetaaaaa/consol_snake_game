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

void visual::generalMenu()
{
	int inputComand;
	setting.fieled.x = 10;
	setting.fieled.y = 20;
	setting.QuantityApples = 2;
	setting.QuantityWall = 0;
	system("cls");
	std::cout << "Game Snake\n";
	std::cout << "1. Start game\n";
	std::cout << "2. Resume game\n";
	std::cout << "3. Settings\n";
	std::cout << "4. Records\n";
	std::cout << "5. Exit game\n";
	while (true) {
		if (_kbhit()) {
			inputComand = _getch();
			if(inputComand == '1') {
				game = new logic;
				game->initGame(& setting);
				inputComand = 'd';
				while(game->tick(inputComand, map, snake)){
					if (_kbhit()) {
						inputComand = _getch();
					}
					showMap(map);
					
				}
			}
			else if(inputComand == '2'){
			}
			else if (inputComand == '3') {
				settingsMenu();
				system("cls");
				std::cout << "Game Snake\n";
				std::cout << "1. Start game\n";
				std::cout << "2. Resume game\n";
				std::cout << "3. Settings\n";
				std::cout << "4. Records\n";
				std::cout << "5. Exit game\n";
			}
			else if (inputComand == '4') {
				recordsMenu();
			}
			else if (inputComand == '5') {
				return;
			}
		}   
	}
}

void visual::settingsMenu()
{
	int inputComand;
	system("cls");
	std::cout << "Settings\n";
	std::cout << "1. Playing fieled settings"<< setting.fieled.x<<" "<< setting.fieled.y <<"\n";
	std::cout << "2. Quantity apples\n";
	std::cout << "3. Quantity wall\n";
	std::cout << "4. Back\n";
	while (true) {
		if (_kbhit()) {
			inputComand = _getch();
			if (inputComand == '1') {

			}
			else if (inputComand == '2') {
			}
			else if (inputComand == '3') {
			}
			else if (inputComand == '4') {
				return;
			}
		}
	}
}

void visual::recordsMenu()
{

}
