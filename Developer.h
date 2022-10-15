#pragma once
#include "Personal.h";
#include "Project.h";
#include "Game.h";
#include "Website.h";
#include "Software.h";
class Developer:public Personal
{
public:
	int salary ;
	int indxArray = 0;
	Project *project[];

	Developer(string name = "");
	friend std::ostream& operator<< (std::ostream& out, const Developer& developer);
private:
	int inpProject(int checkNum);
};

 