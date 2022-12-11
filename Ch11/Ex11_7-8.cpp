#include<iostream> //매개변수 없는 조작자
#include<iomanip>

using namespace std;

int main() {

	cout << hex << showbase << 30 << endl;
	cout << dec << showpos << 10 << endl;
	cout << true << ' ' << false << endl;
	cout << boolalpha << true << ' ' << false << endl;

	cout << showbase;
	cout << noshowpos;
	//타이틀 출력
	cout << setw(8) << "Number";
	cout << setw(10) << "Octal";
	cout << setw(10) << "Hexa"<<endl;

	for (int i = 0; i < 50; i+=5) {
		cout << setw(8) << setfill('.') <<dec<< i;
		cout << setw(10) << setfill(' ')<< oct << i;
		cout << setw(10) << hex << i<<endl;
	}

	return 0;
}