#include "Developer.h"
Developer::Developer(string name) {
	int peremen = 0;
	name = firstName;
	cout << "Какая зарплата у  "<<name<<endl;
	cin >> salary;
	peremen = inpProject(0);
	inpProject(peremen);
	

}
int Developer::inpProject(int checkNum) {
	int num = -1;
	do {
		if (num == checkNum) {
			cout << "Такой вид проекта уже есть выберети другой" << endl;
		}
		cout << "Выберите какой вид проекта вы хотите добавить и введите цифру в консоли" << endl;
		cout << "Игра - 1 " << endl;
		cout << "Сайт - 2 " << endl;
		cout << "ПРиложение - 3 " << endl;

		

		cin >> num;
	} while (num == checkNum);
	
	switch (num) {
	case 1:
		project[indxArray] = new Game();
		break;
	case 2:
		project[indxArray] = new Website();
		break;
	case 3:
		project[indxArray] = new Software();
		break;
    }
	indxArray++;
	return num;
}
std::ostream& operator<< (std::ostream& out, const Developer& developer)
{

	//out << "Сайт с именем " << website.name << "и доменом " << website.domain << "будет разрабатываться " << website.timeDevelep << "days" << endl;

	out <<  developer.project[0]->name << developer.project[0]->timeDevelep;
	return out;
}
