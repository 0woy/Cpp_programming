#include<iostream>
#include<fstream>
#include<string>

using namespace std;


int main() {

	ifstream fin("C://Temp//Q1-4.cpp", ios::in);
	string line;

	bool exit = false;
	while (getline(fin, line)) {
		for (int i = 0; i < line.size(); i++)
			if (line[i] == '/' && line[i + 1] == '/') {
				exit = true;
				break;
			}
		if (exit) {
			exit = false;
			continue;
		}
		else
			cout << line << endl;
	}

	return 0;
}