#include<iostream>
#include<string>
using namespace std;
//
template<typename T1,typename T2>
class Person {
public:
	Person(T1 name, T2 age);
	/* {
		this->m_Age = age;
		this->m_Name = name;
	}*/
	void showperson();
	/* {
		cout << "年龄：" << this->m_Age << "姓名" << this->m_Name;
	}*/
	T1 m_Name;
	T2 m_Age;
};
template<typename T1, typename T2>
Person<T1,T2>::Person(T1 name, T2 age)
{
	this->m_Age = age;
	this->m_Name = name;
}
template<typename T1, typename T2>
void Person<T1,T2>:: showperson()
{
	cout << "年龄：" << this->m_Age << "姓名" << this->m_Name;
}

void test()
{
	Person<string, int>p("张三", 18);
	p.showperson();
}

int main()
{
	test();
	return 0;
}