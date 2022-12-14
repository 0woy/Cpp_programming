#include<iostream>
using namespace std;

int main() {


	cout << 30 << endl; //10진수로 출력

	cout.unsetf(ios::dec);//10진수 해제
	cout.setf(ios::hex);//16진수 설정
	cout << 30 << endl; //16진수로 출력

	cout.setf(ios::showbase);//16진수에 0x 접두어 붙이도록 설정
	cout << 30 << endl; //16진수로 출력

	cout.setf(ios::uppercase);//16진수의 A~F를 대문자로 출력
	cout << 30 << endl; //16진수로 출력

	//10진수 표현과 동시에 실수에 소숫점 이하 나머지 0으로 출력
	cout.setf(ios::dec | ios::showpoint);
	cout << 23.5 << endl;

	cout.setf(ios::scientific);//실수를 과학산술용 표현으로 출력
	cout << 23.5 << endl;

	cout.setf(ios::showpos);//양수인 경우 + 부호도 함께 출력
	cout << 23.5 << endl;
	cout << 23 - 84 << endl;
	return 0;
}