#include<iostream>
#include<string>
using namespace std;

ostream& beep(ostream& outs) {
	cout << '\a';
	return outs;
}

ostream& rightarrow(ostream& outs) {
	cout << "----->";
	return outs;
}

ostream& fivestar(ostream& outs) {
	cout << "*****";
	return outs;
}

istream& question(istream& ins) {
	cout << "�ſ�� �ſ�� ���� ���� ���ڴ�?";
	return ins;
}

int main() {

	cout << "���� �︳�ϴ�." << beep << endl;
	cout << "C" << rightarrow << "C++" << rightarrow << "java" << endl;
	cout << "Visual" << fivestar << "C++" << endl;

	string answer;
	cin >> question >> answer;
	cout << "���󿡼� ���� ���� ����� " << answer << endl;

}