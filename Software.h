#pragma once
#include "Project.h";
class Software:public Project
{
public:
	int size;
	Project game = Project("����������");
	friend std::ostream& operator<< (std::ostream& out, const  Software& software);
	Software();
};

