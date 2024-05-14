#include <iostream>
#include <string>

using namespace std;

// 대체로 상속의 경우에는 public 지정자 사용
// 여러 계층의 상속일 때에 중간 다리에서는 protected 사용

class Monster
{
public:
	string m_Name;
	int m_HP; //public 외부 접근 가능

private:	
	int m_MP; //private 외부 접근 불가능 Monster 클래스에서만 접근 가능

protected:
	int m_DEF; //protected 외부 접근 불가능 Monster 클래스와 그 자식 클래스(파생 클래스)에서만 접근 가능

public:
	int GetHP()
	{
		return m_HP;
	}

	int GetMP()
	{
		return m_MP;
	}
	virtual void Func()
	{
	}
};

// class 클래스명 : 상속 접근 지정자 부모클래스명
class Fighter : public Monster
{
public:
	void Func() override
	{
		m_HP; //public 외부 접근 가능
		m_MP; //private 외부 접근 불가능 Monster 클래스에서만 접근 가능
		m_DEF; //protected 외부 접근 불가능 Monster 클래스, Fighter 클래스와 Fighter 클래스의 자식 클래스(파생 클래스)에서만 접근 가능

	}
};

class Archer: private Monster
{
public:
	void Func() override
	{
		m_HP; //private 외부 접근 가능
		m_MP; //private 외부 접근 불가능 Monster 클래스에서만 접근 가능
		m_DEF; //private 외부 접근 불가능 Monster 클래스와 그 자식 클래스(파생 클래스)에서만 접근 가능

	}
};

class Wizard : protected Monster
{
public:
	void Func() override
	{
		m_HP; //protected 외부 접근 가능
		m_MP; //private 외부 접근 불가능 Monster 클래스에서만 접근 가능
		m_DEF; //protected 외부 접근 불가능 Monster 클래스와 그 자식 클래스(파생 클래스)에서만 접근 가능

	}
};

int main() {
	Monster Temp_Monster;
	Fighter Temp_Fighter;
	Archer Temp_Archer;
	Wizard Temp_Wizard;

	Temp_Monster.m_HP; // public
	Temp_Monster.m_MP; // private
	Temp_Monster.m_DEF; // protected

	// public
	Temp_Fighter.m_HP; // public
	Temp_Fighter.m_MP; // private
	Temp_Fighter.m_DEF; // protected

	// private
	Temp_Archer.m_HP; // private
	Temp_Archer.m_MP; // private
	Temp_Archer.m_DEF; // private

	// protected
	Temp_Wizard.m_HP; // protected
	Temp_Wizard.m_MP; // private
	Temp_Wizard.m_DEF; // protected

	return 0;
}

