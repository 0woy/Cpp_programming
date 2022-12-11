#include<iostream>
#include<vector>

using namespace std;

class Shape {
protected:
	virtual void draw() = 0;
public:
	virtual ~Shape() { cout << "shape �Ҹ���" << endl; }
	void paint() { draw(); }
};

class Circle : public Shape {
protected:
	virtual void draw() { cout << "Circle" << endl; }
	 ~Circle() { cout << "Circel �Ҹ���" << endl; }
};

class Rect : public Shape {
	virtual void draw() { cout << "Rectangle" << endl; }
	~Rect() { cout << "Rectangle �Ҹ���" << endl; }
};

class Line : public Shape {
	virtual void draw() { cout << "Line" << endl; }
	~Line() { cout << "Line �Ҹ���" << endl; }
};

int main() {

	vector<Shape*> v;
	cout << "�׷��� �������Դϴ�." << endl;
	bool exit = true;
	while (exit) {
		int flag;
		cout << "����:1, ����:2, ��κ���:3, ����:4>> ";
		cin >> flag;

		switch (flag)
		{
		case 1:
		{
			int shape;
			cout << "��:1, ��:2, �簢��:3 >> ";
			cin >> shape;
			if (shape == 1) v.push_back(new Line());
			else if (shape == 2) v.push_back(new Circle());
			else if (shape == 3) v.push_back(new Rect());

			break;
		}
		case 2:
		{
			vector<Shape*>::iterator it;
			it = v.begin();
			int idx;
			cout << "�����ϰ��� �ϴ� ������ �ε���>> ";
			cin >> idx;
			it = it + idx;
			it = v.erase(it);
			break;
		}
		case 3:
		{
			for (int i = 0; i < v.size(); i++){
				cout << i<<": ";
				v[i]->paint();
			}
			break;
		}
		case 4: exit = false;
		default:
			break;
		}
	}


	return 0;
}