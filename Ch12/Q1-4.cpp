#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main() {

	ifstream fin("C:\\Temp\\test.txt");
	
	if (!fin) {
		cout << "열기 실패";
		return 0;

	}

	int ch;
/*	while ((ch = fin.get()) != EOF) { // fin으로 읽어서 ch에 저장후 ch가 EOF가 아니라면 반복
		cout.put(ch); //1byte 씩 출력(1byte 씩 읽음)
	}
	

	ofstream fout("C:\\Temp\\out.txt"); //파일에 출력하는 함수
	if (!fout) {
		cout << "열기 실패";
		return 0;
	}
	

	// Q2
	string line;
	int no = 1;
	while (getline(fin, line)) { //cin이 아닌 fin으로 해주어야함.
		//fout << line << endl;
		cout << no++ << ": " << line << endl;
	}
	

	// Q3 한 글자씩 읽어서 영문 소문자를 대문자로 변경(islower, toupper 사용)
	while ((ch = fin.get()) != EOF) {
		if (islower(ch)) {
			cout.put(toupper(ch));
		}
		else
			cout.put(ch);
		// = cout <<(char)ch;
	}
	*/

	//Q4 파일에다 출력
	ofstream fout("C:\\Temp\\out.txt",ios::app); //ios:app 뒤에 이어서 씀
	
	while ((ch = fin.get()) != EOF) {
		if (islower(ch)) {
			fout.put(toupper(ch));
		}
		else
			fout.put(ch);
		// = cout <<(char)ch;
	}
	
	

	fin.close();
	//fout.close();

}