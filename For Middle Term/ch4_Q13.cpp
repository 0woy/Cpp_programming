#include<iostream>
#include<string>
#include<locale>

using namespace std;


class Histogram {
	string text;
	int alpha[26];
public:
	Histogram(string s) {
		this->text = s+"\n";
	}

	void put(string s) {
		this->text.append(s);
	}
	void putc(char c) {
		char buffer[] = {c, '\0'};
		this->text.append(buffer);
	}
	void print() {
		cout << this->text << endl << endl;

		for (int i = 0; i < 26; i++)
			alpha[i] = 0;

		for (int i = 0; i < text.length(); i++) {
			if (isalpha(text[i])) {
				char c = toupper(text[i]);
				alpha[c - 'A']++;
			}
		}
		int sum = 0;
		for (int i = 0; i < 26; i++)
			sum += alpha[i];

		cout << "ÃÑ ¾ËÆÄºª ¼ö " << sum << endl;

		for (int i = 0; i < 26; i++) {
			cout << (char)('A' + i) << " (" << alpha[i] << ")" << '\t' << ": ";
			for (int j = 0; j < alpha[i]; j++) {
				cout << "*";
			}
			cout << endl;
		}

	}
};
int main() {
	Histogram elvisHisto("Wise men say, only fools rush in But I can't help, ");
	elvisHisto.put("falling in love with you");
	elvisHisto.putc('-');
	elvisHisto.put("Elvis Presley");
	elvisHisto.print();

	return 0;
}