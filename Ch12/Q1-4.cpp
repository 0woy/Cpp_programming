#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main() {

	ifstream fin;
	fin.open("C://Windows//system.ini", ios::in);
	
	fstream fout("C://Temp//test.txt", ios::app);

	if (!fin || !fout) {
		cout << "파일 열기 오류" << endl;
		return 0;
	}

	// 영문 텍스트 파일을 읽고 모두 대문자로 변환하여 파일에 저장
	char ch;
	while (true) {
		fin.get(ch);
		if (fin.eof()) break;
		if (islower(ch)) ch = toupper(ch);
		fout.put(ch);
	}
	
	// 파일을 읽고 라인 번호를 붙여서 출력
	/* fin.getline(char* str, int n) 이용
 	int no = 1;
	char line[100];
	while (fin.getline(line, 100)) {
		cout <<no++<<" : "<< line << endl;
	}*/

	// string의 getline() 이용
	int no = 1;
	string line;
	while (getline(fin, line)) {
		cout << no++ << " : " << line << endl;
	}




	return 0;
}