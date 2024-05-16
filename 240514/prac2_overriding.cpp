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
			cout << "삼각형의 변의 개수는 " << pointNum << ", 밑변의 길이는 " << base << endl;
		}
		else {
			cout << "사각형의 변의 개수는 " << pointNum << ", 밑변의 길이는 " << base << endl;
		}
	}

};

class Rectangle : public Shape
{
public:
	float length; // 세로 길이

	Rectangle(float b, float l) {

		this->pointNum = 3;
		this->base = b;
		this->length = l;

	} // 사각형은 pointNum이 4

	void area() {

		float area = base * length;

		cout << "사각형의 넓이는 " << area << endl << endl;
	}

	void printInfo() {

		cout << "사각형의 변의 개수는 " << pointNum << ", 밑변의 길이는 " << base << endl
	   		 << "사각형의 넓이는 " << base * length << endl;	
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


	void area() {

		float area = base * height / 2;

		cout << "삼각형의 넓이는 " << area << endl << endl;
	}

	void printInfo() {

		cout << "삼각형의 변의 개수는 " << pointNum << ", 밑변의 길이는 " << base << endl
			<< "삼각형의 넓이는 " << base * height / 2 << endl;
	}
};

int main() {

	// 사각형
	Rectangle rect(3, 3);

	rect.printInfo();

	//rect.area(); // 9 출력

	// 삼각형
	Triangle tria(7, 3);

	tria.printInfo();

	//tria.area(); // 10.5 출력

	return 0;
}

