#include "Game.h"
Game::Game() {
	cout << "������� ���������� ������� � ����"<<endl;
	cin >> numLevel;
}

std::ostream& operator<< (std::ostream& out, const  Game& game)
{

	out << "���� � ������ " << game.name << "� ����������� ������� " <<  game.numLevel << "����� ��������������� " << game.timeDevelep << "days" << endl;

	return out;
}
