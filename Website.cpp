#include "Website.h"
Website::Website() {
	cout << "������� ����� ����� "<<endl;
	cin >> domain;

}
std::ostream& operator<< (std::ostream& out, const  Website& website)
{
	
	out << "���� � ������ "<< website.name << "� ������� "<<website.domain << "����� ��������������� "<< website.timeDevelep<<"days" << endl;

	return out;
}
