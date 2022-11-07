#include<iostream>
#include<string>
#include<ctime>

using namespace std;

class Player {
	string name;
public:
	void setName(string name) { this->name = name; }
	string getName() { return name; }
};

class GamblingGame {
	Player* p;
public:
	GamblingGame();
	~GamblingGame() {if (p != NULL)	delete[] p;	}

	void start();
	void game();
	bool drawCard();
};

GamblingGame::GamblingGame() {
	srand((unsigned)time(0));

	cout << "***** 겜블링 게임을 시작합니다. *****" << endl;
	p = new Player[2];
}
void GamblingGame::start() {
	string s1, s2;
	cout << "첫번째 선수 이름>> ";
	getline(cin, s1);

	cout << "두번째 선수 이름>> ";
	getline(cin, s2);

	p[0].setName(s1); 
	p[1].setName(s2);

	cout << endl;

}

bool GamblingGame::drawCard() {
	int card[3];
	for (int i = 0; i < 3; i++) {
		int n = rand() % 3;
		card[i] = n;
		cout << card[i] << "\t";
	}
	if (card[0] == card[1] && card[0] == card[2])
		return true;
	else
		return false;
}

void GamblingGame::game() {
	string n;
	int i = 0;
	while (true) {
		cout << p[i % 2].getName() << endl;
		getline(cin, n);
		if (this->drawCard()) {
			cout << p[i % 2].getName() << "님의 승리!!" << endl;
			break;
		}
		else
			cout << "아쉽군요!" << endl;
		i++;
	}
}

int main() {
	GamblingGame g;
	g.start();
	g.game();
	return 0;
}