#include<iostream>
#include<string>
using namespace std;

istream& prompt(istream& ins) {
	cout << "��ȣ?>>";
	return ins;
}

istream& pos(istream& ins) {
	cout << "��ġ��?";
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

	int x, y;
	cin >> pos >> x;
	cin >> pos >> y;
	cout << x << "," << y;

	return 0;
}