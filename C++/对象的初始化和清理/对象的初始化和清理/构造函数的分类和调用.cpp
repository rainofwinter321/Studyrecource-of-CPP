#include<iostream>
#include<string>
using namespace std;

class Person {
public:
	Person()
	{
		cout << "调用构造函数" << endl;
		this->m_age = 20;
	}
	Person(int age) {
		m_age = age;
		cout << "有参构造函数调用" << endl;
	}
	/*Person(const Person& p) {
		m_age = p.m_age;
		cout << "拷贝构造函数调用" << endl;
	}*/
	
	bool cmp( Person p )
	{
		if (this->m_age == p.m_age)
		{
			return true;
		}
		else
		{
			false;
		}
	}
	~Person() {
		cout << "调用析构函数" << endl;
	}


	int m_age;

};
//调用
void test01()
{
	//1.括号法,创建对象时，构造函数自动调用.同时在括号中加入参数或者Person 类型变量，调用有参和拷贝
	Person p;//默认，如果加小括号，编译器认为这是一个函数声明
	//Person p1(20);//输入20 调用有参构造函数
	//Person p2(p1);//拷贝构造函数

	//2.显示法
	//Person p1 = Person(10);
	//Person p2 = Person(p1);
	//Person(10);//匿名对象,没有名字
	//注意事项，不要用拷贝构造函数初始化匿名对象
	//3. 隐式转换法
	//Person p3 = 10;//相当于 Person p3=Person (10);
	
	if (p.cmp(Person(10)))
	{
		cout<<"age相等"<<endl;
	}
	else
	{
		cout<<"age不相等"<<endl;
	}
	
}




int main()
{
	test01();
	return 0;
}