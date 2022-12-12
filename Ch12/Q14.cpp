#include<iostream>
#include<fstream>
#include<string>

using namespace std;


int main() {

	ifstream fin("C://Windows//system.ini",ios::binary);
	char buf[32];
	int n = 0;
	while (!fin.eof()) {
		fin.read(buf, 32);
		cout.write(buf, fin.gcount());
		n += fin.gcount();
	}
	cout << "파일의 크기: " << n << endl;



	return 0;
}