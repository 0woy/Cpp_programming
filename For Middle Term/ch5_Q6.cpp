#include<iostream>
#include<string>

using namespace std;

char& find(char a[], char c, bool& success) {
	for (int i = 0; i < strlen(a); i++) {
		if (a[i] == c) {
			success = true;
			return a[i];
		}
	}
}

int main() {
	char s[] = "Mike";
	bool b = false;
	 
	char& loc = find(s, 'M', b);
	if (b ==false) {
		cout << "M À¾´Ù." << endl;
		return 0;
	}
	loc = 'm';
	cout << s << endl;

	return 0;
}