/*
���α׷� ����: ���̳ʸ� ������ �о�� �Ųٷ� �纻�� ����
*/
#include<iostream>
#include<string>
#include<fstream>

using namespace std;


int main() {

	ifstream fin("C:\\Temp\\logo.jpg", ios::binary | ios::in); //���̳ʸ� �������� �б�
	if (!fin) {

		cout << "���� ����";
		return 0;
	}


	ofstream fout("C:\\Temp\\reversecopy.jpg", ios::binary | ios::out); //���̳ʸ� �������� �б�
	if (!fout) {

		cout << "���� ����";
		return 0;
	}

	// copy: read() �� ���� ���� �е��� �ϴ� �Լ�
	/*
	char buff[1024]; //1024��ŭ �б�
	int count = 0;
	while (!fin.eof()) { //�дٰ� ������ ���� �ƴϸ�
		fin.read(buff, 1024);
		int n = fin.gcount(); //�о���� ���� , �׻� 1024�� �д� ���� �ƴ�.
		fout.write(buff, n); //������ �о�� ��ŭ�� ���Ͽ� ���
		count += n;
	}
	*/

	
	fin.seekg(0,ios::end); // �� ������ �̵� �� ����
	int filesize = fin.tellg(); //�������� ��ġ�� ������ , �� �� �ڿ� ������ ������ ũ�⸦ �˷��� ����

	// �����ص� jpg ������ ������ �ʴ´�.
	// �̹��� ������ ������ ���������� ����� ���� �ƴ϶� ���� ������ ����Ǿ� �����Ƿ�
	// �Ųٷ� ����Ѵٰ� �ص� �Ųٷ� �̹����� ������ �ʴ´�.
	for (int i = 0; i < filesize; i++) {
		fin.seekg(filesize-i);
		int ch = fin.get();
		fout.put(ch);
	}

	fin.close();
	fout.close();

	return 0;
}