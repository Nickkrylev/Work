#pragma once
#include "Project.h";
class Game: public Project
{
public:
	int numLevel;
	friend std::ostream& operator<< (std::ostream& out, const  Game& game);
	Project game = Project("Игры");
	Game();
};

