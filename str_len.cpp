#include<iostream>
#include<string>

using namespace std;

int main() {

	string s = "java";
	string a = "I love java";
	string t = "jazz";

	cout << s << "\t" << t << endl;

	//s.append(t);

	// jazz �� 2��° �ε���(z)���� 2���� java�� �� �ڿ� ���� 
	//s.append(t, 2, 2);	

	// jazz�� java�� 2��° �ε���(v) �տ� ����
	//	s.insert(2, t);	

	// a ���ڿ��� 7�� ��ġ���� 4���� t���ڿ��� ��ü
	// a.replace(7, 4, t);

	// a�� 7�� ���� 4���� ���ڸ� ����
	// a.erase(7, 4);

	// a ���ڿ� �����,(length = 0)
	a.clear();

	cout << s << endl;
	cout << a << endl;



	return 0;
}