#include<iostream>
#include<string>
using namespace std;

istream& prompt(istream& ins) {
	cout << "��ȣ?>>";
	return ins;
}

int main() {

	string password;
	while (true) {
		cin >> prompt >> password;	// �����Ϸ� �ؼ�: prompt(cin)���� �ؼ�
		if (password == "C++") {
			cout << "login success!!" << endl;
			break;
		}
		else
			cout << "login fail. retry!" << endl;
	}
	return 0;
}