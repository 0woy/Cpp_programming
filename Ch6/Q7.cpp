#include<iostream>
#include<ctime>	// For TIME FUNC
using namespace std;

class Random {
public:
	// 항상 다른 랜덤수를 발생시키기 위한 seed를 설정하는 함수
	static void seed() { srand((unsigned)time(0)); } // 씨드 설정
	static int nextInt(int min = 0, int max = 32767); //min과 max 사이의 랜덤 정수 리턴
	static char nextAlphabet();
	static double nextDouble(); // 0보다 크거나 같고 1보다 적은 실수 리턴 
};

/*
if 30 ~ 40: 11개의 숫자 
rand() : 0 <= n < 32767
*/
int Random::nextInt(int min, int max) {
	int range = max - min + 1;
	if (range < 1) return -1;
	int n =(rand() % range)+min;
	
	return n;
}

//52개
char Random::nextAlphabet() {
	int n = Random::nextInt() %52; // n = 0 ~ 51
	// 0 ~ 25 => a~z 26~51 => A-Z

	return 'A' + n;

	/*
	if(n<26) return 'a' + n;
	else return 'A' + n;
 */
}

double Random::nextDouble() {
	double d = (double)Random::nextInt();
	d /= RAND_MAX; // less than 1.0

	return d;
}

int main() {
	Random::seed();
	cout << "1에서 100까지 랜덤한 정수 10개를 출력합니다" << endl;
	for (int i = 0; i < 10; i++) cout << Random::nextInt(1, 100) << ' ';
	cout << endl;

	cout << "알파벳을 랜덤하게 10개를 출력합니다" << endl;
	for (int i = 0; i < 10; i++) cout << Random::nextAlphabet() << ' ';
	cout << endl;

	cout << "랜덤한 실수를 10개를 출력합니다" << endl;
	for (int i = 0; i < 10; i++) cout << Random::nextDouble() << ' ';
	cout << endl;

}