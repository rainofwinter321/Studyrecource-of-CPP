#include<iostream>
#include<string>
using namespace std;

class Person {
public:
	// this 指针本质的 指针常量 ，指针指向不可改   
	//const Person*const this;
	// 在成员函数后加const，修饰的是this的指向，指向的值也不可修改
	void showPerson()const//常函数
	{
		m_B = 200;
		m_A = 100;
		this = NULL;
	}
	
	int m_A;
	mutable int m_B;//让常函数可以修改
};

void test01()
{
	Person p;
	p.showPerson();
}
void test02()
{
	const Person pp;//常对象,只能调用常函数
	pp.m_A = 500;//不可改
	pp.m_B = 45;
}

int main()
{
	test01();


	return 0;
}



	