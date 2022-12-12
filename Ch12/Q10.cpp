/*
프로그램 설명: 두 바이너리 파일이 같은 파일인지 검사하는 프로그램 작성

작성일: 2022.12.05.

*/

#include<iostream>
#include<fstream>
#include<string>

using namespace std;

bool file_compare(const char* f1, const char* f2) {
	ifstream fa(f1, ios::binary);
	ifstream fb(f2,ios::binary);

	if (!fa || !fb) {
		cout << "열기 실패";
		exit(0); //return으로  보내면 두 파일이 다름으로 인식
	}

	int ch1, ch2;
	while ((ch1 = fa.get()) != EOF) {
		ch2 = fb.get();
		if (ch2 == EOF || ch1!= ch2) return false;
	}
	ch2 = fb.get();
	if (ch2 != EOF) return false;

	return true;
}



int main() {
	const char* f1 = "C:\\Temp\\logo.jpg";	//const char* 형태로 넘겨줘야 하기 때문!!!
	const char* f2 = "C:\\Temp\\copy.jpg";

	if (file_compare(f1, f2))
		cout << "두 파일이 같다" << endl;
	else
		cout << "두 파일이 다르다" << endl;
}