#include<iostream>
#include<string>
using namespace std;

istream& prompt(istream& ins) {
	cout << "암호?>>";
	return ins;
}

istream& pos(istream& ins) {
	cout << "위치는?";
	return ins;
}
int main() {

	string password;
	while (true) {
		cin >> prompt >> password;	// 컴파일러 해석: prompt(cin)으로 해석
		if (password == "C++") {
			cout << "login success!!" << endl;
			break;
		}
		else
			cout << "login fail. retry!" << endl;
	}

	int x, y;
	cin >> pos >> x;
	cin >> pos >> y;
	cout << x << "," << y;

	return 0;
}