#include<iostream>
#include<string>
using namespace std;
//创建一个类模板
template<typename Myname,typename Age>//模板类型参数列表中可以有一个或多个模板类型参数
class Person
{
public:
	Person(Myname name,Age age)
	{
		this->m_age = age;
		this->m_name = name;
	}


	Myname m_name;
	Age m_age;
};
//类模板不能使用自动类型推导，只有显示指定类型
//类模板中的模板类型参数列表可以有默认参数
void test1()
{
	Person<string,int> p1("张安", 100);
}


int main()
{



	return 0;
}