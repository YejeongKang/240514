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

		cout << "���� ������ " << pointNum << ", \n�غ��� ���̴� " << base << endl;
	}

	virtual void Func()
	{
	}
};

// class Ŭ������ : ��� ���� ������ �θ�Ŭ������
class Rectangle: public Shape
{	
public:
	float length; // ���� ����

	Rectangle(int p, float b, float l) : Shape(p, b), length(l) {}

	void Func() override
	{
		pointNum;
		base;
	}

	void area() {

		float area = base * length;

		cout << "�簢���� ���̴� " << area << endl;
	}
};

class Triangle : public Shape
{
public:
	float height; // ����
	
	Triangle(int p, float b, float h) : Shape(p, b), height(h) {} // ������

	void Func() override
	{
		pointNum;
		base;
	}

	void area() {

		float area = base * height / 2;

		cout << "�ﰢ���� ���̴� " << area << endl;
	}
};

int main() {
	
	Rectangle rect(4, 3, 3);

	Triangle tria(3, 4, 3);

	rect.area(); // 9 ���

	tria.area(); // 6 ���

	return 0;
}

