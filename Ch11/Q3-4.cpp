/*
����: ignore()�� ����Ͽ� Ư�� ���� ������ ���ڿ��� ���
*/

#include<iostream>
using namespace std;


int main() {
	
	int ch; //���� ���·� �Է� �޴� ����
	int flag;
	cout << "3������: 0, 4�� ����:1>>";
	cin >> flag;

	if (flag == 0) {
		//ignore�� �Է� �ޱ� �� �ۼ�
		cin.ignore(100, ';'); //�ִ� 100������, �����ݷ��� ������ �ߴ��ϰ� ���
		while ((ch = cin.get()) != EOF) {  //�Է� ���� ch ���� EOF�� �ƴ� ��� �ݺ�
			cout << char(ch); //�Է��� ch ��� ���
			if (ch == '\n') {
				cin.ignore(100, ';');
			}
		}

	}

	else {
		while ((ch = cin.get()) != EOF) {
			if (ch == ';') {
				cin.ignore(100, '\n');
				cout << endl;
			}
			else
				cout << char(ch);
		}
	}


	return 0;
}