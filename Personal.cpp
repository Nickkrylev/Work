#include "Personal.h"
Personal::Personal() {
	std::cout << "¬ведите им€\n";
	std::cin >> firstName;
	std::cout << "¬ведите фамилию\n";
	std::cin >> lastName;
	std::cout << "¬ведите отчество\n";
	std::cin >> patronymic;
}