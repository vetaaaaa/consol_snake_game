#pragma once
#include <iostream>
#include <vector>
#include <list>
#include <conio.h>
#include "logic.h"
#include "GeneralStructur.h"

#define SPACE_MAP '_'
#define SNAKE_FACE '#'
#define SNAKE_TAIL '+'
#define WALL '='
#define APPLE '@'

class visual
{
	logic* game;
	size_t QuantityApples;
	size_t QuantityWall;
	settings setting;
	
public:
	std::list<point>snake/* = { {5,9}, {4, 9}, {3, 9} }*/;
	std::vector<std::vector<char>> map/* = { {'_','_','_','_','_'},{'_','_','_','_','_'},{'_','_','_','_','_'},{'_','_','_','_','_'},{'_','_','_','_','_'} }*/;

	void showMap(std::vector<std::vector<char>> map);
	void createMap(size_t height, size_t width);

	void generalMenu();
	void settingsMenu();
	void recordsMenu();

};


