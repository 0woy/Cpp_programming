/*
vector�� ��ü�� ����, �˻� ����
������ ���� ���߱� ���ӿ� vector Ȱ��

�ۼ���: 2022.11.21.
*/

#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<ctime> // ������
#include<cstdlib> //���� �Լ�


using namespace std;

class Nation {
	string name;
	string capital;
public: 
	Nation(string name, string capital){
		this->name = name;
		this->capital = capital;
	}
	string get_name() {	return name; }

	string get_capital() {	return capital;	}

};

class Game {
	vector<Nation> v;
public:
	Game();
	void input();
	void quiz();
};

Game::Game() {

	Nation n[] = { Nation("�ѱ�","����"), Nation("�Ϻ�","����"),Nation("�̱�","������"),Nation("���Ű��ź","Ÿ����Ʈ"),Nation("����Ʈ","ī�̷�"),
	Nation("������","�ĸ�") ,Nation("����","����") ,Nation("��Ż����","�θ�") ,Nation("����","���")};

	for (int i = 0; i < 9; i++)
		v.push_back(n[i]);

	srand((unsigned)time(0));	//�õ� �� �ʱ�ȭ
}

void Game::input() {
	cout << "���� " << v.size() << "���� ���� �ԷµǾ� �ֽ��ϴ�." << endl;
	cout << "����� ������ �Է��ϼ���(no no �̸� �Է� ��)" << endl;
	while (true) {
		string nation, capital;
		cout << v.size() + 1 << ">>";
		cin >> nation >> capital;

		if (nation == "no" && capital == "no")
			break;

		int i;
		for (i = 0; i < v.size(); i++) {
			if (v.at(i).get_name() == nation) {
				cout << "aleady exit!!!" << endl;
				break;
			}
		}
		if (i < v.size()) 
			continue;
		
		else {
			Nation tmp(nation, capital);
			v.push_back(tmp);
		}
		
	}
}

void Game::quiz() {



	string str;
	while (true) {
		int random = rand() % v.size();
		cout << v.at(random).get_name() << "�� ������?";
		cin >> str;
		if (str == "exit")
			break;
		if (str == v.at(random).get_capital()) cout << "Correct !!" << endl;
		else cout << "NO !!!" << endl;

	}

}

int main() {

	int flag;
	cout << "***** ������ ���� ���߱� ������ �����մϴ�. *****" << endl;

	Game ng= Game();
	while (true) {
		cout << "���� �Է�: 1, ����: 2, ����: 3 >> ";
		cin >> flag;
		if (flag == 3) {
			cout << "������ �����մϴ�." << endl;
			break;
		}
		else if (flag == 1) {
			ng.input();
		}\
		else
			ng.quiz();
			
	}


	return 0;
}