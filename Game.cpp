#include "Game.h"
Game::Game() {
	cout << "¬ведите количество уровней в игре"<<endl;
	cin >> numLevel;
}

std::ostream& operator<< (std::ostream& out, const  Game& game)
{

	out << "»гра с именем " << game.name << "и количеством уровней " <<  game.numLevel << "будет разрабатыватьс€ " << game.timeDevelep << "days" << endl;

	return out;
}
