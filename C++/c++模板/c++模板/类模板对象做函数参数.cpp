#include<iostream>
#include<string>
using namespace std;
//1.传入指定类型,最常用
template<typename T1,typename T2>
class Person
{
public:
	Person(T1 name, T2 age)
	{
		this->m_name = name;
		this->m_age = age;
	}

	T1 m_name;
	T2 m_age;
};
void func(Person<string, int>& p)
{
	cout << p.m_name << endl
		<< p.m_age << endl;
}

void test1()
{
	Person<string, int>p1("石头人", 100);
	func(p1);
}
//参数模板化
template<typename T1,typename T2>
void func1(Person<T1,T2>&p)
{
	cout << p.m_name << endl << p.m_age << endl;
}
void test2()
{
	Person<string, int>p1("妮蔻", 20);
	func1(p1);
}
//整个类模板化
template<typename T>
void func2(T& p)
{
	
}

int main()
{
	//test1();
	test2();
	return 0;
}