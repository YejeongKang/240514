#include <iostream>
#include <string>

#define SNACKNUM 4
using namespace std;

class Snack
{
public:
	int price;
	string pName;
	string mCompany;

	virtual string getFeature() = 0;

	int getprice() {
		return price;
	};

	string getpName() {
		return pName;
	};

	string getmCompany() {
		return mCompany;
	};

};

class Candy : public Snack 
{
public:
	string taste;

	Candy(string t, int p, string n, string c) {

		this->taste = t;
		this->price = p;
		this->pName = n;
		this->mCompany = c;
	}

	virtual string getFeature() override {
		return taste;
	} 

};

class Chocolate : public Snack
{
public:
	string shape;

	Chocolate(string s, int p, string n, string c) {

		this->shape = s;
		this->price = p;
		this->pName = n;
		this->mCompany = c;
	}

	virtual string getFeature() override {
		return shape;
	}

};

int main() {
	// 상품의 인스턴스를 담을 동적 배열 선언
	Snack* snackBasket[SNACKNUM];

	snackBasket[0] = new Candy("strawberry", 300, "딸기야", "이달달썩");
	snackBasket[1] = new Candy("melon", 400, "메론야", "이달달썩");
	snackBasket[2] = new Chocolate("square", 1500, "찰리집", "양치꼭꼭");
	snackBasket[3] = new Chocolate("heart", 2000, "찰리맘", "양치꼭꼭");

	// 바구니 안에 있는 상품의 이름 출력
	cout << "바구니 안에 있는 상품은 ";

	for (int i = 0; i < SNACKNUM; i++) {
		cout << snackBasket[i]->getpName() << " ";
	}

	cout << endl;
	
	for (int i = 0; i < SNACKNUM; i++) {
		delete snackBasket[i];
	}

}