/*
vector에 객체의 삽입, 검색 응용
나라의 수도 맞추기 게임에 vector 활용

작성일: 2022.11.21.
*/

#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<ctime> // 랜던수
#include<cstdlib> //랜덤 함수


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

	Nation n[] = { Nation("한국","서울"), Nation("일본","도쿄"),Nation("미국","워싱턴"),Nation("우즈베키스탄","타슈켄트"),Nation("이집트","카이로"),
	Nation("프랑스","파리") ,Nation("영국","런던") ,Nation("이탈리아","로마") ,Nation("북한","평양")};

	for (int i = 0; i < 9; i++)
		v.push_back(n[i]);

	srand((unsigned)time(0));	//시드 값 초기화
}

void Game::input() {
	cout << "현재 " << v.size() << "개의 나라가 입력되어 있습니다." << endl;
	cout << "나라와 수도를 입력하세요(no no 이면 입력 끝)" << endl;
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
		cout << v.at(random).get_name() << "의 수도는?";
		cin >> str;
		if (str == "exit")
			break;
		if (str == v.at(random).get_capital()) cout << "Correct !!" << endl;
		else cout << "NO !!!" << endl;

	}

}

int main() {

	int flag;
	cout << "***** 나라의 수도 맞추기 게임을 시작합니다. *****" << endl;

	Game ng= Game();
	while (true) {
		cout << "정보 입력: 1, 퀴즈: 2, 종료: 3 >> ";
		cin >> flag;
		if (flag == 3) {
			cout << "게임을 종료합니다." << endl;
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