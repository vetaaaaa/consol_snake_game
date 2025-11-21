#pragma once
#include "visual.h"
#include <fstream>
#include <chrono>
#include <thread>
#include <vector>
#include <string>
#include <conio.h>
#include "GeneralStructur.h

class logic
{
	settings setting;
public:
	void initGame(settings* setting) {

	}
	bool tick(int input, std::vector<std::vector<char>> & map, std::list<point> & snake) {
		point temp, temp1;
		if (input == 'a') {
			temp.x = snake.begin()->x;
			temp.y = snake.begin()->y;
			temp.x -= 1;
		}
		else if (input == 'd') {
			temp.x = snake.begin()->x;
			temp.y = snake.begin()->y;
			temp.x += 1;
		}
		else if (input == 'w') {
			temp.x = snake.begin()->x;
			temp.y = snake.begin()->y;
			temp.y -= 1;
		}
		else if (input == 's') {
			temp.x = snake.begin()->x;
			temp.y = snake.begin()->y;
			temp.y += 1;
		}

		for (auto i = snake.begin(); i != snake.end(); i++) {
			if (i == snake.begin()) {
				temp1.x = i->x;
				temp1.y = i->y;
				i->x = temp.x;
				i->y = temp.y;
			}
			else {
				temp.x = i->x;
				temp.y = i->y;
				i->x = temp1.x;
				i->y = temp1.y;
				temp1.x = temp.x;
				temp1.y = temp.y;
			}
		}
		return false;
	}
};

//1 визуал: 
// 1.1 меню во врем€ игры: остановки\ продолжить\ сохранение игры по нажатию кнопки Q\R\Z
// 1.2 выход в глав. меню во врем€ игры по кнопке esc
// 1.3 реализаци€ меню настроек: очистка\ удаление рекордов, маштаб игровой площади, настройка преп€дствий (настройка времени, их наличие), максимальное кол-во €блок на игровом поле
// 1.4 глав. меню: начать новую игру, продолжить игру, настройки, рекорды
// 1.5 меню рекордов (лучший счет\ худший счет\ все счета) структура счета: номер игры, кол-во очков, врем€ игры
// 1.6 изменение цветов дл€ символов отображени€
// 1.7 символы дл€ сущностей (@ - €блоко красное, # голова, + тело, = преграды)
// 1.8 меню игровой сессии (расположение, левый верхний угол меню, правый таймер)

//2 логика:
// 2.1 запоминание счетчика, сохраение счета в файл
// 2.2 по€вление преп€дствий на поле каждые пол минуты 
// 2.3 добавление €блок по заполненности на поле
// 2.4 таймер игровой сессии