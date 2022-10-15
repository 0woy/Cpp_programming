#include<iostream>
#include<string>

using namespace std;

int main() {

	string s = "java";
	string t = "C++";
	cout << s << "\t" << t << endl;

	s.swap(t);	// 문자열 교환 함수
	cout << s << "\t" << t << endl;

	// 크기 비교
	if (s > t)
		cout << s << "가 " << t << "보다 사전적으로 뒤에 있습니다."<<endl;
	else
		cout << s << "(이)가 " << t << "보다 사전적으로 앞에 있습니다."<<endl;

	// 크기 비교(compare)
	if(s.compare(t)>0)
		cout << s << "가 " << t << "보다 사전적으로 뒤에 있습니다." << endl;
	else
		cout << s << "(이)가 " << t << "보다 사전적으로 앞에 있습니다." << endl;

	return 0;
}