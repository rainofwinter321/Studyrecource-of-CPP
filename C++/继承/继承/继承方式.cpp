#include<iostream>
using namespace std;

class Base1 {//父类
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;

};

class son1 : public Base1//公共继承
{
public:
	void  func()
	{
		m_A = 10;//父类中的公共权限 到子类中依然是公共权限
		m_B = 10;//父类中的保护权限 到子类中依然是保护权限
		m_C = 10;//父类中的私有权限 子类访问不到
	}

};

class son2 : protected Base1//保护继承
{
public:
	void  func()
	{
		m_A = 10;//父类中的公共权限 到子类中变成保护权限
		m_B = 10;//父类中的保护权限 到子类中依然是保护权限
		m_C = 10;//父类中的私有权限 子类访问不到
	}
};

void test01();
void test02();
int main()
{


	return 0;
}

void test01()
{
	son1 s1;
	s1.m_B = 20;//父类中的保护权限 到子类中依然是保护权限
}
void test02()
{
	son2 s2;
	s2.m_A = 100;//保护继承下，父类中的公共和保护全变为保护
}

//私有继承下，公共和保护变为私有。