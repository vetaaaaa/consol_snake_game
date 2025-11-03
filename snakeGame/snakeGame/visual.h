#pragma once
#include <iostream>
#include <vector>
#include <list>
#include <conio.h>
#include "logic.h"

#define SPACE_MAP '_'
#define SNAKE_FACE '#'
#define SNAKE_TAIL '+'
#define WALL '='
#define APPLE '@'

class visual
{
public:
	std::list<point>snake = { {5,10}, {4, 10}, {3, 10} };
	std::vector<std::vector<char>> map/* = { {'_','_','_','_','_'},{'_','_','_','_','_'},{'_','_','_','_','_'},{'_','_','_','_','_'},{'_','_','_','_','_'} }*/;
	void showMap(std::vector<std::vector<char>> map);
	void createMap(size_t height, size_t width);
};

