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
	cout << "거울아 거울아 누가 제일 예쁘니?";
	return ins;
}

int main() {

	cout << "벨이 울립니다." << beep << endl;
	cout << "C" << rightarrow << "C++" << rightarrow << "java" << endl;
	cout << "Visual" << fivestar << "C++" << endl;

	string answer;
	cin >> question >> answer;
	cout << "세상에서 제일 예쁜 사람은 " << answer << endl;

}