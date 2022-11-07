#include<iostream>
#include<string>

using namespace std;

class Converter {
protected:
	double ratio;
	virtual double convert(double src) = 0; // src를 다른 단위로 변환한다.
	virtual string getSourceString() = 0; // 소스 단위 명칭
	virtual string getDestString() = 0; // dest 단위 명칭
public:
	Converter(double ratio) { this->ratio = ratio; }
	void run() {
		double src;
		cout << getSourceString() << "을 " << getDestString() << "로 바꿉니다. ";
		cout << getSourceString() << "을 입력하세요>> ";
		cin >> src;
		cout << "변환 결과 : " << convert(src) << getDestString() << endl;
	}
};

class WonToDollar : public Converter {
public:
	
	double convert(double src) { return src / ratio; }
	string getSourceString() { return "원"; }
	string getDestString() { return "달러"; }

	// 부모 생성자를 실행하도록 임의적으로 만듦
	// 들어온 ratio 값을 부모 생성자에게 넘겨주면서 호출
	WonToDollar(double ratio) : Converter(ratio){}	
	
};

class KmToMile : public Converter {
public:
	KmToMile(double ratio): Converter(ratio){}
	double convert(double src) override { return src / ratio; }
	string getSourceString() override{ return "km"; }
	string getDestString() { return "mile"; }
};

int main() {
	WonToDollar wd(1010);
	wd.run();

	KmToMile toMile(1.609344);
	toMile.run();
}