/*
�̸�: ������
�й�: 20204624
������: 2022.10.15.

5�� �������� 10��: 
������ �����ϴ� �ڵ� �ۼ�
*/
#include<iostream>
using namespace std;

class Buffer {
	string text;
public:
	Buffer(string text) { this->text = text; }
	void add(string next) { text += next; }
	void pirnt() { cout << text << endl; }
};

// orig�� ���� �ٲ��� �ϹǷ� ���� �Ű������� ����
Buffer& append(Buffer&orig, string text) {
	orig.add(text);
	return orig;
}

int main() {

	cout << "�̸�: ������\n�й�:20204624\n" << endl;
	Buffer buf("Hello");
	Buffer& temp = append(buf, "Guys");
	temp.pirnt();
	buf.pirnt();
}