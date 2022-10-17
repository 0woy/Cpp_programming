#include<iostream>
#include<ctime>	// For TIME FUNC
using namespace std;

class Random {
public:
	// �׻� �ٸ� �������� �߻���Ű�� ���� seed�� �����ϴ� �Լ�
	static void seed() { srand((unsigned)time(0)); } // ���� ����
	static int nextInt(int min = 0, int max = 32767); //min�� max ������ ���� ���� ����
	static char nextAlphabet();
	static double nextDouble(); // 0���� ũ�ų� ���� 1���� ���� �Ǽ� ���� 
};

/*
if 30 ~ 40: 11���� ���� 
rand() : 0 <= n < 32767
*/
int Random::nextInt(int min, int max) {
	int range = max - min + 1;
	if (range < 1) return -1;
	int n =(rand() % range)+min;
	
	return n;
}

//52��
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
	cout << "1���� 100���� ������ ���� 10���� ����մϴ�" << endl;
	for (int i = 0; i < 10; i++) cout << Random::nextInt(1, 100) << ' ';
	cout << endl;

	cout << "���ĺ��� �����ϰ� 10���� ����մϴ�" << endl;
	for (int i = 0; i < 10; i++) cout << Random::nextAlphabet() << ' ';
	cout << endl;

	cout << "������ �Ǽ��� 10���� ����մϴ�" << endl;
	for (int i = 0; i < 10; i++) cout << Random::nextDouble() << ' ';
	cout << endl;

}