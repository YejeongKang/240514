#include <iostream>
#include <string>

using namespace std;

class Shape
{
public:
	int pointNum; // 변의 개수
	float base; // 밑변의 길이
	
	Shape(int p, float b) : pointNum(p), base(b) {} // 생성자

	void printInfo() {

		cout << "변의 개수는 " << pointNum << ", \n밑변의 길이는 " << base << endl;
	}

	virtual void Func()
	{
	}
};

// class 클래스명 : 상속 접근 지정자 부모클래스명
class Rectangle: public Shape
{	
public:
	float length; // 세로 길이

	Rectangle(float b, float l) : Shape(4, b), length(l) {} // 사각형은 pointNum이 4

	void Func() override
	{
		pointNum;
		base;
	}

	void area() {

		float area = base * length;

		cout << "사각형의 넓이는 " << area << endl;
	}
};

class Triangle : public Shape
{
public:
	float height; // 높이
	
	Triangle(float b, float h) : Shape(3, b), height(h) {} // 삼각형은 pointNum이 3

	void Func() override
	{
		pointNum;
		base;
	}

	void area() {

		float area = base * height / 2;

		cout << "삼각형의 넓이는 " << area << endl;
	}
};

int main() {
	
	Rectangle rect(3, 3);

	Triangle tria(7, 3);

	rect.area(); // 9 출력

	tria.area(); // 6 출력

	return 0;
}

