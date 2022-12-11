#include<iostream>
#include<vector>

using namespace std;

class Shape {
protected:
	virtual void draw() = 0;
public:
	virtual ~Shape() { cout << "shape 소멸자" << endl; }
	void paint() { draw(); }
};

class Circle : public Shape {
protected:
	virtual void draw() { cout << "Circle" << endl; }
	 ~Circle() { cout << "Circel 소멸자" << endl; }
};

class Rect : public Shape {
	virtual void draw() { cout << "Rectangle" << endl; }
	~Rect() { cout << "Rectangle 소멸자" << endl; }
};

class Line : public Shape {
	virtual void draw() { cout << "Line" << endl; }
	~Line() { cout << "Line 소멸자" << endl; }
};

int main() {

	vector<Shape*> v;
	cout << "그래픽 에디터입니다." << endl;
	bool exit = true;
	while (exit) {
		int flag;
		cout << "삽입:1, 삭제:2, 모두보기:3, 종료:4>> ";
		cin >> flag;

		switch (flag)
		{
		case 1:
		{
			int shape;
			cout << "선:1, 원:2, 사각형:3 >> ";
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
			cout << "삭제하고자 하는 도형의 인덱스>> ";
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