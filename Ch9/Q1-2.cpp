#include<iostream>
#include<string>

using namespace std;

class Converter {
protected:
	double ratio;
	virtual double convert(double src) = 0; // src�� �ٸ� ������ ��ȯ�Ѵ�.
	virtual string getSourceString() = 0; // �ҽ� ���� ��Ī
	virtual string getDestString() = 0; // dest ���� ��Ī
public:
	Converter(double ratio) { this->ratio = ratio; }
	void run() {
		double src;
		cout << getSourceString() << "�� " << getDestString() << "�� �ٲߴϴ�. ";
		cout << getSourceString() << "�� �Է��ϼ���>> ";
		cin >> src;
		cout << "��ȯ ��� : " << convert(src) << getDestString() << endl;
	}
};

class WonToDollar : public Converter {
public:
	
	double convert(double src) { return src / ratio; }
	string getSourceString() { return "��"; }
	string getDestString() { return "�޷�"; }

	// �θ� �����ڸ� �����ϵ��� ���������� ����
	// ���� ratio ���� �θ� �����ڿ��� �Ѱ��ָ鼭 ȣ��
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