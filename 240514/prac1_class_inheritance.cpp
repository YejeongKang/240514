#include <iostream>
#include <string>

using namespace std;

class Shape
{
public:
	int pointNum; // ���� ����
	float base; // �غ��� ����
	
	Shape(int p, float b) : pointNum(p), base(b) {} // ������

	void printInfo() {

		if (pointNum == 3) {
			cout << "�ﰢ���� ���� ������ " << pointNum << ", �غ��� ���̴� " << base << endl;
		}
		else {
			cout << "�簢���� ���� ������ " << pointNum << ", �غ��� ���̴� " << base << endl;
		}
	}

	virtual void Func()
	{
	}
};

class Rectangle: public Shape
{	
public:
	float length; // ���� ����

	Rectangle(float b, float l) : Shape(4, b), length(l) {} // �簢���� pointNum�� 4

	void Func() override
	{
		pointNum;
		base;
	}

	void area() {

		float area = base * length;

		cout << "�簢���� ���̴� " << area << endl << endl;
	}
};

class Triangle : public Shape
{
public:
	float height; // ����
	
	Triangle(float b, float h) : Shape(3, b), height(h) {} // �ﰢ���� pointNum�� 3

	void Func() override
	{
		pointNum;
		base;
	}

	void area() {

		float area = base * height / 2;

		cout << "�ﰢ���� ���̴� " << area << endl << endl;
	}
};

int main() {
	
	// �簢��
	Rectangle rect(3, 3);
	
	rect.printInfo();

	rect.area(); // 9 ���

	// �ﰢ��
	Triangle tria(7, 3);

	tria.printInfo();

	tria.area(); // 6 ���

	return 0;
}

