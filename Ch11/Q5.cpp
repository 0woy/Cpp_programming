/*
char [] 대신 string을 이용하여 문자열을 다루도록 프로그램 재작성

cin.get : 맨 마지막 구분자를 버퍼에서 지우지 않기 때문에 cin.ignore(1)을 해주어야 함
getline : 마지막 구분자를 버퍼에서 지우므로 구분자를 삭제하는 걸 고민하지 않아도 됨,
누군가의 멤버가 아님!

*/

#include<iostream>
#include<string>

using namespace std;

int main() {

//	char cmd[80];
	string str; //cmd를 string 으로 바꾸기 위한

	cout << "string으로 문자열을 읽습니다." << endl;
	while (true)
	{
		cout << "종료하려면 exit을 입력하쇼 >>";
		getline(cin,str);

		if (str == "exit") {
			cout << "프로그램 종료" << endl;
			return 0;
		}
		else {
			cout << str << endl;
		}
	}

	return 0;
}