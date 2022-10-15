#include<iostream>
#include<string>

using namespace std;

int main() {

	string s = "java";
	string a = "I love java";
	string t = "jazz";

	cout << s << "\t" << t << endl;

	//s.append(t);

	// jazz 의 2번째 인덱스(z)부터 2개를 java의 맨 뒤에 삽입 
	//s.append(t, 2, 2);	

	// jazz를 java의 2번째 인덱스(v) 앞에 삽입
	//	s.insert(2, t);	

	// a 문자열의 7번 위치부터 4개를 t문자열로 대체
	// a.replace(7, 4, t);

	// a의 7번 부터 4개의 문자를 지움
	// a.erase(7, 4);

	// a 문자열 지우기,(length = 0)
	a.clear();

	cout << s << endl;
	cout << a << endl;



	return 0;
}