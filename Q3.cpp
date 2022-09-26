// P213, Q3 문자 찾기
#include<iostream>
#include<string>
using namespace std;

int main() {

	string str;
	cout << "문자열 입력 >> ";
	getline(cin, str);

	char s;
	cout << "찾고 싶은 문자 입력>> ";
	cin >> s;
	int cnt = 0;
	for (int i = 0; i < str.length(); i++) {
		if (str.at(i) == s)
			cnt++;
	}
	cout << "문자 "<<s<<"의 개수는 " << cnt << "개";

	return 0;
}