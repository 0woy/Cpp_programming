#include<iostream>
#include<string>

using namespace std;

int main() {
	string s;

	cout << "문자열을 입력하세요. 빈 칸이 있어도 됩니다. (한글 안 됨). " << endl;

	getline(cin, s);
	int len = s.length();

	for (int i = 0; i < len; i++) {
//		string f = s.substr(0, 1);	// 맨 앞 글자를 뒤로 보내기
		string last = s.substr(len - 1, 1);	// 맨 끝 글자를 앞으로 보내기
		string sub = s.substr(0, len - 1);

		s =  last+sub;
		cout << s << endl;
	}
}