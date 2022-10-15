#include "Software.h"
Software::Software() {
	cout << "Какой размер файла приложения"<<endl;
	cin >> size;
}

std::ostream& operator<< (std::ostream& out, const  Software& software)
{

	out << "Приложение с именем " << software.name << "и размером " << software.size << "будет разрабатываться " << software.timeDevelep << "days" << endl;

	return out;
}
