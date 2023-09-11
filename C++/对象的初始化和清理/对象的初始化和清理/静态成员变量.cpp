#include<iostream>
#include<string>
using namespace std;

class Person {
public:
	static int m_age;

};

int  Person:: m_age=100;  //Person:: 让编译器明白变量m_age是Person作用域下的静态变量
void test01();

int main()
{
	test01();

	return 0;
}

void test01()
{
	Person p;
	cout << p.m_age << endl;
	Person p1;
	p1.m_age = 500;
	cout << p1.m_age << endl;

	//通过类名访问静态变量
	//cout << Person::m_age << endl;
}