#include<iostream>
#include<fstream>
#include<string>
#include<vector>

using namespace std;
int main() {

	ifstream fin;
	string file_path = "C://Windows//system.ini";
	fin.open(file_path, ios::in);
	
	if (!fin.is_open()) {
		cout << "���� ���� ����" << endl;
		return 0;
	}

	vector<string> v;
	string line;
	while (getline(fin, line)) {
		v.push_back(line);
	}

	cout << file_path << " ���� �б� �Ϸ�" << endl;
	cout << "���� ��ȣ�� �Է� (1���� ������ ����) >>  " << endl;
	while (true) {
		int num;
		cout << ": ";
		cin >> num;
		if (num < 1) break;
		else if (num > v.size()) continue;
		cout << v[num-1] << endl;
	}
	cout << "�����մϴ�." << endl;
	fin.close();


	return 0;
}