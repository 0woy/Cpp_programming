/*
map 컨테이너를 활용해 이름, 성적을 저장
성적 조회하는 점수관리 프로그램

작성일: 2022.11.21.
*/

#include<iostream>
#include<string>
#include<map>

using namespace std;

class ScoreMan{
	map <string, int> scoreMap;
public:
	void add();		//성적 입력
	void check();	//성적 조회

};

void ScoreMan::add() {
	cout << "이름과 점수>>";
	string name;
	int score;
	cin >> name >> score;

	if (scoreMap.find(name) == scoreMap.end())
		scoreMap.insert(make_pair(name, score));	//또는  scoreMap[name] = score;
}

void ScoreMan::check() {
	string name;
	cout << "이름>> ";
	cin >> name;

	if (scoreMap.find(name) != scoreMap.end())
		cout << name << "의 점수는 " << scoreMap.at(name)<<endl; //scoreMap[name];
	else
		cout << name << "이(가) 존재하지 않습니다." << endl;

}

int main() {

	ScoreMan sm;
	cout << "***** 점수관리 프로그램 HIGH SCORE을 시작합니다. *****" << endl;
	
	while (true) {
		cout << "입력: 1, 조회: 2, 종료: 3 >> ";
		int flag;
		cin >> flag;
		if (flag == 3) break;
		else if (flag == 1) sm.add();
		else sm.check();

	}
	cout << "프로그램을 종료합니다. . ." << endl;

	return 0;
}