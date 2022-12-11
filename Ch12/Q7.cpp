/*
프로그램 설명: 바이너리 파일을 읽어와 거꾸로 사본에 저장
*/
#include<iostream>
#include<string>
#include<fstream>

using namespace std;


int main() {

	ifstream fin("C:\\Temp\\logo.jpg", ios::binary | ios::in); //바이너리 형식으로 읽기
	if (!fin) {

		cout << "열기 실패";
		return 0;
	}


	ofstream fout("C:\\Temp\\reversecopy.jpg", ios::binary | ios::out); //바이너리 형식으로 읽기
	if (!fout) {

		cout << "열기 실패";
		return 0;
	}

	// copy: read() 한 번에 많이 읽도록 하는 함수
	/*
	char buff[1024]; //1024만큼 읽기
	int count = 0;
	while (!fin.eof()) { //읽다가 파일의 끝이 아니면
		fin.read(buff, 1024);
		int n = fin.gcount(); //읽어들인 개수 , 항상 1024를 읽는 것은 아님.
		fout.write(buff, n); //실제로 읽어온 만큼만 파일에 기록
		count += n;
	}
	*/

	
	fin.seekg(0,ios::end); // 맨 끝으로 이동 후 멈춤
	int filesize = fin.tellg(); //포인터의 위치를 말해줌 , 즉 맨 뒤에 있으니 파일의 크기를 알려줄 것임

	// 실행해도 jpg 파일은 열리지 않는다.
	// 이미지 파일의 내용은 색상정보만 저장된 것이 아니라 여러 정보가 저장되어 있으므로
	// 거꾸로 출력한다고 해도 거꾸로 이미지가 생기지 않는다.
	for (int i = 0; i < filesize; i++) {
		fin.seekg(filesize-i);
		int ch = fin.get();
		fout.put(ch);
	}

	fin.close();
	fout.close();

	return 0;
}