#include<iostream>
#include<string>

using namespace std;

int main() {

	string k = "I love very java";
	string j = "aaa";

//	k = j;

	cout << k.length() << '\t' << k.size() << '\t' << k.capacity() << endl;


	return 0;
}