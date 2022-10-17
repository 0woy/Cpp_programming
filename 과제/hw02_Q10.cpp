/*
이름: 박윤아
학번: 20204624
제출일: 2022.10.15.

5장 연습문제 10번: 
참조를 리턴하는 코드 작성
*/
#include<iostream>
using namespace std;

class Buffer {
	string text;
public:
	Buffer(string text) { this->text = text; }
	void add(string next) { text += next; }
	void pirnt() { cout << text << endl; }
};

// orig의 값도 바뀌어야 하므로 참조 매개변수로 설정
Buffer& append(Buffer&orig, string text) {
	orig.add(text);
	return orig;
}

int main() {

	cout << "이름: 박윤아\n학번:20204624\n" << endl;
	Buffer buf("Hello");
	Buffer& temp = append(buf, "Guys");
	temp.pirnt();
	buf.pirnt();
}