#include<iostream>
using namespace std;

template<typename T>
bool Compare(T& a, T& b)
{
	if (a == b)
		return true;

	return false;
}

void test1()
{
	int a = 10, b = 20;
	if (Compare(a, b))
	{
		cout << "a=b" << endl;
	}
	else
	{
		cout << "a!=b" << endl;
	}
}
//对于自定义的类型，模板有局限性。
//可以使用具体化的函数模板来解决自定义类型的问题
class Person
{
public:

	Person(int a)
	{
		this->m_age = a;
	}

	int m_age;
};
template<>bool Compare(Person& a, Person& b)//具体写一个特殊情况下的函数模板，当有特殊情况，先调用它.
{
	if (a.m_age == b.m_age)
	{
		return true;
	}
	return false;
}

void test2()
{
	Person p1(10);
	Person p2(12);
	if (Compare(p1, p2))
	{
		cout << "p1=p2" << endl;
	}
	else
	{
		cout << "p1!=p2" << endl;
	}
}


int main()
{
	test2();
	return 0;
}