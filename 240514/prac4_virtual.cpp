#include <iostream>
#include <string>

using namespace std;

class Shape
{
public:
	int pointNum; // ���� ����
	float base; // �غ��� ����

	//Shape() {} // ������

	void printInfo() {

		if (pointNum == 3) {
			cout << "�ﰢ���� ���� ������ " << pointNum << ", �غ��� ���̴� " << base << endl << endl;
		}
		else if (pointNum == 4) {
			cout << "�簢���� ���� ������ " << pointNum << ", �غ��� ���̴� " << base << endl << endl;
		}

		else if (pointNum == 0) {
			cout << "���� �������� " << base << endl << endl;
		}
	}
	virtual void draw() = 0;
};

class Circle : public Shape 
{
public:
	float radius; // ������

	Circle(float r) {

		this->pointNum = 0;
		this->radius = r;

	} // ���� pointNum�� 0

	virtual void draw() override {
		cout << "[��]" << endl << endl;
	}

	void area() {

		float area = 3.14 * radius * radius;

		cout << "���� ���̴� " << area << endl << endl;
	}

	void printInfo() { // �������̵�

		cout << "���� �������� " << radius << endl
			<< "���� ���̴� " << 3.14 * radius  * radius << endl << endl;
	}
};

class Rectangle : public Shape
{
public:
	float length; // ���� ����

	Rectangle(float b, float l) {

		this->pointNum = 4;
		this->base = b;
		this->length = l;

	} // �簢���� pointNum�� 4

	virtual void draw() override {
		cout << "[�簢��]" << endl << endl;
	}

	void area() {

		float area = base * length;

		cout << "�簢���� ���̴� " << area << endl << endl;
	}

	void printInfo() { // �������̵�

		cout << "�簢���� ���� ������ " << pointNum << ", �غ��� ���̴� " << base << endl
			<< "�簢���� ���̴� " << base * length << endl << endl;
	}

};

class Triangle : public Shape
{
public:
	float height; // ����

	Triangle(float b, float h) {

		this->pointNum = 3;
		this->base = b;
		this->height = h;

	} // �ﰢ���� pointNum�� 3

	virtual void draw() override {
		cout << "[�ﰢ��]" << endl << endl;
	}

	void area() {

		float area = base * height / 2;

		cout << "�ﰢ���� ���̴� " << area << endl << endl;
	}

	void printInfo() { // �����ε�

		cout << "�����ε� ����~" << endl << endl;
	}

	void printInfo(float b, float h) { // �����ε�

		cout << "�ﰢ���� ���� ������ " << pointNum << ", �غ��� ���̴� " << base << endl
			<< "�ﰢ���� ���̴� " << b * h / 2 << endl << endl;
	}
};

int main() {

	// ��
	Circle cir(4);

	cir.draw();

	cir.printInfo();

	// �簢��
	Rectangle rect(3, 3);

	rect.draw();

	rect.printInfo(); // �������̵�

	//rect.area(); // 9 ���

	// �ﰢ��
	Triangle tria(7, 3);

	tria.draw();

	tria.printInfo(7, 3); // �����ε�

	//tria.area(); // 10.5 ���

	return 0;
}

