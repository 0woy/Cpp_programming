#include<iostream>
#include<fstream>
#include<string>

using namespace std;


int main() {

	ifstream fin("C://Windows//system.ini", ios::binary);
	ofstream fout("C://Temp//test.txt", ios::app);

	if (!fin || !fout) {
		cout << "파일 열기 오류" << endl;
		return 0;
	}

	fin.seekg(0, ios::end);	//파일 포인터르 파일의 맨 끝으로 이동
	int size = fin.tellg();	// 현재 파일포인터의 위치를 저장(파일 크기)
	int unit = size / 10; // 파일 사이즈의 10%를 unit에 저장
	
	char* buf = new char[unit]; //unit 만큼 문자열 동적 생성
	fin.seekg(0, ios::beg); // 다시 파일의 처음 위치로 이동
	
	for (int i = 0; i < 10; i++) {
		fin.read(buf, unit); // unit 만큼 읽어 buf에 저장
		int readCount = fin.gcount();
		fout.write(buf, readCount);
		cout << "." << readCount << "B " << (i + 1) * 10 << "%" << endl;
	}

	cout << size << "B 복사완료" << endl;
	fin.close();
	fout.close();
	delete[] buf;


	return 0;
}