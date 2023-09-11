#include<iostream>
#include<string>
using namespace std;
//关系运算符重载
class Person
{
public:
	Person(string name, int age) {//对象初始化

		m_Name = name;
		m_Age = age;

	}

	bool operator ==(Person& p)
	{
		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
			return true;
		else
			return false;
	}


	string m_Name;
	int m_Age;
};


void test01();

int main()
{

	test01();


	return 0;
}

void test01()
{
	Person p1("jack", 25);
	Person p2("tom", 19);
	if (p1 == p2)
	{
		cout << "p1=p2" << endl;
	}
	else
	{
		cout << "p1!=p2" << endl;
	}


}