#include<iostream>
using namespace std;
//虚继承
//关键字virtual 
//底层：Sheep和Tuo本质上继承了一个vbptr=virtual base pointer ，这是一个指向vbtable的指针

class Animal{
public:
	Animal()
	{
		m_Age = 19;
	}

	int m_Age;
};
//羊类
class Sheep :virtual public Animal{};
//骆驼类
class Tuo:virtual public Animal{};
//羊驼
class sheeptuo:public Sheep,public Tuo{};

void test01();

int main()
{
	test01();
	return 0;

}
void test01()
{
	sheeptuo p;
	cout << p.m_Age;//二义性 ,加作用域就行了
}