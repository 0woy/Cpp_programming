#include<iostream>
using namespace std;

int main() {


	cout << 30 << endl; //10������ ���

	cout.unsetf(ios::dec);//10���� ����
	cout.setf(ios::hex);//16���� ����
	cout << 30 << endl; //16������ ���

	cout.setf(ios::showbase);//16������ 0x ���ξ� ���̵��� ����
	cout << 30 << endl; //16������ ���

	cout.setf(ios::uppercase);//16������ A~F�� �빮�ڷ� ���
	cout << 30 << endl; //16������ ���

	//10���� ǥ���� ���ÿ� �Ǽ��� �Ҽ��� ���� ������ 0���� ���
	cout.setf(ios::dec | ios::showpoint);
	cout << 23.5 << endl;

	cout.setf(ios::scientific);//�Ǽ��� ���л���� ǥ������ ���
	cout << 23.5 << endl;

	cout.setf(ios::showpos);//����� ��� + ��ȣ�� �Բ� ���
	cout << 23.5 << endl;
	cout << 23 - 84 << endl;
	return 0;
}