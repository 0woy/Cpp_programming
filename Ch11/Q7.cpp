/*
조작자를 입력하여 포맷 출력 응용

매개변수가 없는 조작자: 한 번 설정하면 계속 영향
매개변수가 있는 조작자: 사용할 때마다 계속 사용해야함.

isprint(ch): ch가 출력할 수 있는 문자인지 확인

*/

#include<iostream>
#include<iomanip>
#include<cmath> //제곱근을 구하기 위해 사용하는 헤더파일
using namespace std;


int main() {
	
	cout << "dec\thexa\tchar\tdec\thexa\tchar" << endl;
	for (int i = 0; i < 128; i++) {
		cout << dec << i << '\t' << hex << i << '\t' << (isprint(i) ? (char)i : '.') << '\t';
		if (i % 4 == 3) cout << endl;
	}





	/*cout << left; //왼쪽 정렬
	cout << setw(15) << "Number" << setw(15) << "Square" << setw(15) << "Square Root" << endl;
	int k = 5;
	for (int i = 0; i < 10; i++) {
		cout << setw(15) << setfill('_') <<i * 5;
		cout << setw(15) << setfill('_') << k*k;
		cout << setw(15) << setfill('_') << setprecision(3) << sqrt((double)k) << endl;
		k += 5;
	}
*/
	return 0;
}