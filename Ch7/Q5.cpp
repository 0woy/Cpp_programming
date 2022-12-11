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

	// Ŭ������ ��� �Լ��� ����
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

// �ܺ��Լ��� �ۼ��ϰ� ������ �Լ��� ����
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
	if (c == fuchsia) cout << "����� ����" << endl;
	else cout << "����� �ƴ�" << endl;

	return 0;
}