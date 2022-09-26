#include<iostream>

using namespace std;

class Circle {
	int radius;
public:
	void setRadius(int radius) {
		this->radius = radius;
	}
	double getArea() {
		return 3.14 * radius * radius;
	}
};

int main() {
	Circle* circle;	// ���� ������ ���� �����ͷ� ����

	int r;
	int number;
	cout << "���� ���� >> ";
	cin >> number;

	circle = new Circle[number];
	for (int i = 0; i < number; i++) {
		cout << "��" << i + 1 << "�� ������ >> ";
		cin >> r;
		circle[i].setRadius(r);
	}

	int count = 0;

	for (int i = 0; i < number; i++) {
		if (circle[i].getArea() > 100)
			count++;
	}
	cout << "������ 100���� ū ���� " << count << "�� �Դϴ�.";

	delete[] circle;

}