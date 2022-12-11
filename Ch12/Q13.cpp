/*
프로그램 설명: 사용자가 입력한 문자열로 시작하는 모든 단어를 출력

작성일: 2022.12.05.
*/

#include<iostream>
#include<fstream>
#include<string>
#include<vector>

using namespace std;

void fileRead(vector<string>& v, ifstream& fin) {
	string line;
	while (getline(fin, line))
	{
		v.push_back(line); //읽은 라인을 벡터에 저장
	}
}

void search(vector<string>& v, string key) {
	for (int i = 0; i < v.size(); i++) {
		int index = v[i].find(key); // key를 포함하는지, key가 발견된 idx위치 반환하여 index에 저장
		if (index == v[i].size() - key.size()) //key로 시작하는 단어만 출력
			cout << v[i] << endl;

		// if(index == v[i].size() - key.size())
	}
}

int main() {
	
	vector <string> wordVector;
	ifstream fin("C:\\Temp\\words.txt");

	if (!fin) {
		cout << "열기 실패";
		return 0;
	}

	fileRead(wordVector, fin);
	fin.close();

	cout << "word.txt 파일을 읽었습니다." << endl;
	while (true) {
		cout << "검색할 단어를 입력하시오 >>";
		string find;
		getline(cin, find);
		if (find == "exit") break;
		search(wordVector, find);
	}
	cout << "프로그램을 종료합니다" << endl;
}