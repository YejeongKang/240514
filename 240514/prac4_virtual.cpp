#include <iostream>
#include <string>

using namespace std;

class Shape
{
public:
	int pointNum; // 변의 개수
	float base; // 밑변의 길이

	//Shape() {} // 생성자

	void printInfo() {

		if (pointNum == 3) {
			cout << "삼각형의 변의 개수는 " << pointNum << ", 밑변의 길이는 " << base << endl << endl;
		}
		else if (pointNum == 4) {
			cout << "사각형의 변의 개수는 " << pointNum << ", 밑변의 길이는 " << base << endl << endl;
		}

		else if (pointNum == 0) {
			cout << "원의 반지름은 " << base << endl << endl;
		}
	}
	virtual void draw() = 0;
};

class Circle : public Shape 
{
public:
	float radius; // 반지름

	Circle(float r) {

		this->pointNum = 0;
		this->radius = r;

	} // 원은 pointNum이 0

	virtual void draw() override {
		cout << "[원]" << endl << endl;
	}

	void area() {

		float area = 3.14 * radius * radius;

		cout << "원의 넓이는 " << area << endl << endl;
	}

	void printInfo() { // 오버라이딩

		cout << "원의 반지름은 " << radius << endl
			<< "원의 넓이는 " << 3.14 * radius  * radius << endl << endl;
	}
};

class Rectangle : public Shape
{
public:
	float length; // 세로 길이

	Rectangle(float b, float l) {

		this->pointNum = 4;
		this->base = b;
		this->length = l;

	} // 사각형은 pointNum이 4

	virtual void draw() override {
		cout << "[사각형]" << endl << endl;
	}

	void area() {

		float area = base * length;

		cout << "사각형의 넓이는 " << area << endl << endl;
	}

	void printInfo() { // 오버라이딩

		cout << "사각형의 변의 개수는 " << pointNum << ", 밑변의 길이는 " << base << endl
			<< "사각형의 넓이는 " << base * length << endl << endl;
	}

};

class Triangle : public Shape
{
public:
	float height; // 높이

	Triangle(float b, float h) {

		this->pointNum = 3;
		this->base = b;
		this->height = h;

	} // 삼각형은 pointNum이 3

	virtual void draw() override {
		cout << "[삼각형]" << endl << endl;
	}

	void area() {

		float area = base * height / 2;

		cout << "삼각형의 넓이는 " << area << endl << endl;
	}

	void printInfo() { // 오버로딩

		cout << "오버로딩 실패~" << endl << endl;
	}

	void printInfo(float b, float h) { // 오버로딩

		cout << "삼각형의 변의 개수는 " << pointNum << ", 밑변의 길이는 " << base << endl
			<< "삼각형의 넓이는 " << b * h / 2 << endl << endl;
	}
};

int main() {

	// 원
	Circle cir(4);

	cir.draw();

	cir.printInfo();

	// 사각형
	Rectangle rect(3, 3);

	rect.draw();

	rect.printInfo(); // 오버라이딩

	//rect.area(); // 9 출력

	// 삼각형
	Triangle tria(7, 3);

	tria.draw();

	tria.printInfo(7, 3); // 오버로딩

	//tria.area(); // 10.5 출력

	return 0;
}

