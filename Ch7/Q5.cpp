#include<iostream>
using namespace std;

class Color {
	int red, green, blue;
public:
	Color() { red = green = blue = 0; }
	Color(int r, int g, int b) {
		this->red = r;
		this->green = g;
		this->blue = b;
	}

	void setColor(int r, int g, int b) { red = r; green = g; blue = b; }
	void show() { cout << red << ' ' << green << ' ' << blue << endl; }

	// 클래스의 멤버 함수로 구현
	/*
	Color operator + (Color op2) {
		Color c;
		c.setColor(this->red + op2.red, this->green + op2.green, this->blue + op2.blue);
		return c;
	}

	bool operator ==(Color op2){
		if (this->red != op2.red || this->blue != op2.blue || this->green != op2.green)
			return false;
		return true;
	}
	*/
	friend Color operator + (const Color op1, const Color op2);
	friend bool operator == (const Color op1, const Color op2);
};

// 외부함수로 작성하고 프렌드 함수로 구현
Color operator + (const Color op1, const Color op2) {
	Color c;
	c.setColor(op1.red + op2.red, op1.green + op2.green, op1.blue + op2.blue);
	return c;
}

bool operator == (const Color op1, const Color op2)
{
	if (op1.red != op2.red || op1.green != op2.green || op1.blue != op2.blue)
		return false;
	else
		return true;
}

int main() {
	Color red(255, 0, 0), blue(0, 0, 255), c;
	c = red + blue;
	c.show();

	Color fuchsia(255, 0, 255);
	if (c == fuchsia) cout << "보라색 맞음" << endl;
	else cout << "보라색 아님" << endl;

	return 0;
}