#include<iostream>
#include<fstream>

using namespace std;


int main() {

	ifstream fin("C://Temp//out.txt");
	if (!fin) {
		cout << "���� ����" << endl;
		return 0;
	}

	int count = 0;
	int c; 

	while ((c = fin.get()) != EOF) {
		cout << (char)c;
		count++;
	}
	cout << endl;

	cout << "���� ����Ʈ ��: " << count << endl;
	fin.close();


}