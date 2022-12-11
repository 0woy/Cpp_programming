/*
���α׷� ����: ����ڰ� �Է��� ���ڿ��� �����ϴ� ��� �ܾ ���

�ۼ���: 2022.12.05.
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
		v.push_back(line); //���� ������ ���Ϳ� ����
	}
}

void search(vector<string>& v, string key) {
	for (int i = 0; i < v.size(); i++) {
		int index = v[i].find(key); // key�� �����ϴ���, key�� �߰ߵ� idx��ġ ��ȯ�Ͽ� index�� ����
		if (index == v[i].size() - key.size()) //key�� �����ϴ� �ܾ ���
			cout << v[i] << endl;

		// if(index == v[i].size() - key.size())
	}
}

int main() {
	
	vector <string> wordVector;
	ifstream fin("C:\\Temp\\words.txt");

	if (!fin) {
		cout << "���� ����";
		return 0;
	}

	fileRead(wordVector, fin);
	fin.close();

	cout << "word.txt ������ �о����ϴ�." << endl;
	while (true) {
		cout << "�˻��� �ܾ �Է��Ͻÿ� >>";
		string find;
		getline(cin, find);
		if (find == "exit") break;
		search(wordVector, find);
	}
	cout << "���α׷��� �����մϴ�" << endl;
}