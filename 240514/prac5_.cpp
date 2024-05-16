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
	// ��ǰ�� �ν��Ͻ��� ���� ���� �迭 ����
	Snack* snackBasket[SNACKNUM];

	snackBasket[0] = new Candy("strawberry", 300, "�����", "�̴޴޽�");
	snackBasket[1] = new Candy("melon", 400, "�޷о�", "�̴޴޽�");
	snackBasket[2] = new Chocolate("square", 1500, "������", "��ġ����");
	snackBasket[3] = new Chocolate("heart", 2000, "������", "��ġ����");

	// �ٱ��� �ȿ� �ִ� ��ǰ�� �̸� ���
	cout << "�ٱ��� �ȿ� �ִ� ��ǰ�� ";

	for (int i = 0; i < SNACKNUM; i++) {
		cout << snackBasket[i]->getpName() << " ";
	}

	cout << endl;
	
	for (int i = 0; i < SNACKNUM; i++) {
		delete snackBasket[i];
	}

}