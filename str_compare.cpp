#include<iostream>
#include<string>

using namespace std;

int main() {

	string s = "java";
	string t = "C++";
	cout << s << "\t" << t << endl;

	s.swap(t);	// ���ڿ� ��ȯ �Լ�
	cout << s << "\t" << t << endl;

	// ũ�� ��
	if (s > t)
		cout << s << "�� " << t << "���� ���������� �ڿ� �ֽ��ϴ�."<<endl;
	else
		cout << s << "(��)�� " << t << "���� ���������� �տ� �ֽ��ϴ�."<<endl;

	// ũ�� ��(compare)
	if(s.compare(t)>0)
		cout << s << "�� " << t << "���� ���������� �ڿ� �ֽ��ϴ�." << endl;
	else
		cout << s << "(��)�� " << t << "���� ���������� �տ� �ֽ��ϴ�." << endl;

	return 0;
}