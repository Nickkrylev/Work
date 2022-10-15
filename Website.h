#pragma once
#include "Project.h";

class Website:public Project
{
public:
	std::string domain;
	friend std::ostream& operator<< (std::ostream& out, const  Website& website);
	Project site = Project("Сайт");
	Website();
};

