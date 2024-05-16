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
			cout << "�ﰢ���� ���� ������ " << pointNum << ", �غ��� ���̴� " << base << endl;
		}
		else {
			cout << "�簢���� ���� ������ " << pointNum << ", �غ��� ���̴� " << base << endl;
		}
	}

};

class Rectangle : public Shape
{
public:
	float length; // ���� ����

	Rectangle(float b, float l) {

		this->pointNum = 3;
		this->base = b;
		this->length = l;

	} // �簢���� pointNum�� 4

	void area() {

		float area = base * length;

		cout << "�簢���� ���̴� " << area << endl << endl;
	}

	void printInfo() {

		cout << "�簢���� ���� ������ " << pointNum << ", �غ��� ���̴� " << base << endl
	   		 << "�簢���� ���̴� " << base * length << endl;	
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


	void area() {

		float area = base * height / 2;

		cout << "�ﰢ���� ���̴� " << area << endl << endl;
	}

	void printInfo() {

		cout << "�ﰢ���� ���� ������ " << pointNum << ", �غ��� ���̴� " << base << endl
			<< "�ﰢ���� ���̴� " << base * height / 2 << endl;
	}
};

int main() {

	// �簢��
	Rectangle rect(3, 3);

	rect.printInfo();

	//rect.area(); // 9 ���

	// �ﰢ��
	Triangle tria(7, 3);

	tria.printInfo();

	//tria.area(); // 10.5 ���

	return 0;
}

