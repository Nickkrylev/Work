#include "Project.h"
Project::Project() {};
Project::Project(std::string message) {
	cout << "������� ��� "<<message <<endl;
	cin >> name;
	cout << "������� ����� ����� �� ���������� "<< message <<endl;
	cin >> timeDevelep;

}