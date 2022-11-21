/*
map �����̳ʸ� Ȱ���� �̸�, ������ ����
���� ��ȸ�ϴ� �������� ���α׷�

�ۼ���: 2022.11.21.
*/

#include<iostream>
#include<string>
#include<map>

using namespace std;

class ScoreMan{
	map <string, int> scoreMap;
public:
	void add();		//���� �Է�
	void check();	//���� ��ȸ

};

void ScoreMan::add() {
	cout << "�̸��� ����>>";
	string name;
	int score;
	cin >> name >> score;

	if (scoreMap.find(name) == scoreMap.end())
		scoreMap.insert(make_pair(name, score));	//�Ǵ�  scoreMap[name] = score;
}

void ScoreMan::check() {
	string name;
	cout << "�̸�>> ";
	cin >> name;

	if (scoreMap.find(name) != scoreMap.end())
		cout << name << "�� ������ " << scoreMap.at(name)<<endl; //scoreMap[name];
	else
		cout << name << "��(��) �������� �ʽ��ϴ�." << endl;

}

int main() {

	ScoreMan sm;
	cout << "***** �������� ���α׷� HIGH SCORE�� �����մϴ�. *****" << endl;
	
	while (true) {
		cout << "�Է�: 1, ��ȸ: 2, ����: 3 >> ";
		int flag;
		cin >> flag;
		if (flag == 3) break;
		else if (flag == 1) sm.add();
		else sm.check();

	}
	cout << "���α׷��� �����մϴ�. . ." << endl;

	return 0;
}