#include "Software.h"
Software::Software() {
	cout << "����� ������ ����� ����������"<<endl;
	cin >> size;
}

std::ostream& operator<< (std::ostream& out, const  Software& software)
{

	out << "���������� � ������ " << software.name << "� �������� " << software.size << "����� ��������������� " << software.timeDevelep << "days" << endl;

	return out;
}
