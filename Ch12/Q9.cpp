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
		cout << "파일 열기 오류" << endl;
		return 0;
	}

	vector<string> v;
	string line;
	while (getline(fin, line)) {
		v.push_back(line);
	}

	cout << file_path << " 파일 읽기 완료" << endl;
	cout << "라인 번호를 입력 (1보다 작으면 종료) >>  " << endl;
	while (true) {
		int num;
		cout << ": ";
		cin >> num;
		if (num < 1) break;
		else if (num > v.size()) continue;
		cout << v[num-1] << endl;
	}
	cout << "종료합니다." << endl;
	fin.close();


	return 0;
}