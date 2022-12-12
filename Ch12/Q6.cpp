#include<iostream>
#include<fstream>
#include<string>

using namespace std;


int main() {

	ifstream fin("C://Windows//system.ini", ios::binary);
	ofstream fout("C://Temp//test.txt", ios::app);

	if (!fin || !fout) {
		cout << "���� ���� ����" << endl;
		return 0;
	}

	fin.seekg(0, ios::end);	//���� �����͸� ������ �� ������ �̵�
	int size = fin.tellg();	// ���� ������������ ��ġ�� ����(���� ũ��)
	int unit = size / 10; // ���� �������� 10%�� unit�� ����
	
	char* buf = new char[unit]; //unit ��ŭ ���ڿ� ���� ����
	fin.seekg(0, ios::beg); // �ٽ� ������ ó�� ��ġ�� �̵�
	
	for (int i = 0; i < 10; i++) {
		fin.read(buf, unit); // unit ��ŭ �о� buf�� ����
		int readCount = fin.gcount();
		fout.write(buf, readCount);
		cout << "." << readCount << "B " << (i + 1) * 10 << "%" << endl;
	}

	cout << size << "B ����Ϸ�" << endl;
	fin.close();
	fout.close();
	delete[] buf;


	return 0;
}