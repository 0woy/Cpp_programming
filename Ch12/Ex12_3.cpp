#include<iostream>
#include<fstream>

using namespace std;


int main() {

	ifstream fin("C://Temp//out.txt");
	if (!fin) {
		cout << "열기 오류" << endl;
		return 0;
	}

	int count = 0;
	int c; 

	while ((c = fin.get()) != EOF) {
		cout << (char)c;
		count++;
	}
	cout << endl;

	cout << "읽은 바이트 수: " << count << endl;
	fin.close();


}