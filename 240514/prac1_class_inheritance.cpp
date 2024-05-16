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

	Rectangle(float b, float l) : Shape(4, b), length(l) {} // �簢���� pointNum�� 4

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
	
	Triangle(float b, float h) : Shape(3, b), height(h) {} // �ﰢ���� pointNum�� 3

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
	
	Rectangle rect(3, 3);

	Triangle tria(7, 3);

	rect.area(); // 9 ���

	tria.area(); // 6 ���

	return 0;
}

