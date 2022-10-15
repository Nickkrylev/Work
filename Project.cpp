#include "Project.h"
Project::Project() {};
Project::Project(std::string message) {
	cout << "¬ведите им€ "<<message <<endl;
	cin >> name;
	cout << "¬ведите врем€ даное на разработку "<< message <<endl;
	cin >> timeDevelep;

}