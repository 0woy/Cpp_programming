#include<iostream>
#include<string>  
using namespace std;

class Histogram {
	int histo[26];
	string str;
public:
	Histogram(string str) {
		this->str = str+"\n";
	}
	void put(string plus) {
		this->str.append(plus);
	}
	void putc(char c) {
		char buffer[] = { c,'\0' };
		this->str.append(buffer);
	}

	void get_str() {
		cout << str << endl;
	}

	void print();

};

void Histogram::print() {

	cout << str << endl << endl;
	for (int i = 0; i < 26; i++)
		histo[i] = 0;

	for (int i = 0; i < str.length(); i++) {
		if (isalpha(str[i])) {	// str[i]°¡ ¾ËÆÄºªÀÌ¸é
			char c = tolower(str[i]);
			histo[c - 'a']++;
		}
	}
	int sum = 0;
	for (int i = 0; i < 26; i++) {
		sum += histo[i];
	}
	cout << " ÃÑ ¾ËÆÄºª ¼ö " << sum << endl;

	for (int i = 0; i < 26; i++) {
		cout << (char)('a' + i) << " (" << histo[i] << ")" << '\t' << ": ";
		for (int j = 0; j < histo[i]; j++)
			cout << "*";
		cout << endl;
	}

}

int main() {
	Histogram elviHisto("Wise men say, only fools rush in But I can't help, ");
	elviHisto.put("falling in love with you");
	elviHisto.putc('-');
	elviHisto.put("Elvis Presley");

	//elviHisto.get_str();
	elviHisto.print();
}