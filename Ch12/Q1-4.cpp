#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main() {

	ifstream fin("C:\\Temp\\test.txt");
	
	if (!fin) {
		cout << "���� ����";
		return 0;

	}

	int ch;
/*	while ((ch = fin.get()) != EOF) { // fin���� �о ch�� ������ ch�� EOF�� �ƴ϶�� �ݺ�
		cout.put(ch); //1byte �� ���(1byte �� ����)
	}
	

	ofstream fout("C:\\Temp\\out.txt"); //���Ͽ� ����ϴ� �Լ�
	if (!fout) {
		cout << "���� ����";
		return 0;
	}
	

	// Q2
	string line;
	int no = 1;
	while (getline(fin, line)) { //cin�� �ƴ� fin���� ���־����.
		//fout << line << endl;
		cout << no++ << ": " << line << endl;
	}
	

	// Q3 �� ���ھ� �о ���� �ҹ��ڸ� �빮�ڷ� ����(islower, toupper ���)
	while ((ch = fin.get()) != EOF) {
		if (islower(ch)) {
			cout.put(toupper(ch));
		}
		else
			cout.put(ch);
		// = cout <<(char)ch;
	}
	*/

	//Q4 ���Ͽ��� ���
	ofstream fout("C:\\Temp\\out.txt",ios::app); //ios:app �ڿ� �̾ ��
	
	while ((ch = fin.get()) != EOF) {
		if (islower(ch)) {
			fout.put(toupper(ch));
		}
		else
			fout.put(ch);
		// = cout <<(char)ch;
	}
	
	

	fin.close();
	//fout.close();

}