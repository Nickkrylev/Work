#include "Website.h"
Website::Website() {
	cout << "¬ведите домен сайта "<<endl;
	cin >> domain;

}
std::ostream& operator<< (std::ostream& out, const  Website& website)
{
	
	out << "—айт с именем "<< website.name << "и доменом "<<website.domain << "будет разрабатыватьс€ "<< website.timeDevelep<<"days" << endl;

	return out;
}
