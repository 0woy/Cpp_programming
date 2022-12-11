#include<iostream>
#include<fstream>

using namespace std;

int main() {

	fstream fout("C://Temp//out.txt", ios::out | ios::app);
	if (!fout) {
		cout << "���� ����" << endl;
		return 0;
	}
	
	fstream fin("C://Temp//test.txt", ios::in);
	if (!fin) {
		cout << "���� ����" << endl;
		return  0;
	}

	int c;
	while ((c = fin.get()) != EOF) {
		fout.put(c);
	}

	fin.close();
	fout.close();

	return 0;
}