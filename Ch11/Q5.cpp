/*
char [] ��� string�� �̿��Ͽ� ���ڿ��� �ٷ絵�� ���α׷� ���ۼ�

cin.get : �� ������ �����ڸ� ���ۿ��� ������ �ʱ� ������ cin.ignore(1)�� ���־�� ��
getline : ������ �����ڸ� ���ۿ��� ����Ƿ� �����ڸ� �����ϴ� �� ������� �ʾƵ� ��,
�������� ����� �ƴ�!

*/

#include<iostream>
#include<string>

using namespace std;

int main() {

//	char cmd[80];
	string str; //cmd�� string ���� �ٲٱ� ����

	cout << "string���� ���ڿ��� �н��ϴ�." << endl;
	while (true)
	{
		cout << "�����Ϸ��� exit�� �Է��ϼ� >>";
		getline(cin,str);

		if (str == "exit") {
			cout << "���α׷� ����" << endl;
			return 0;
		}
		else {
			cout << str << endl;
		}
	}

	return 0;
}