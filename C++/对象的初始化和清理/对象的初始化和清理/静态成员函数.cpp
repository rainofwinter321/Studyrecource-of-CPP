#include<iostream>
#include<string>
using namespace std;

class Person {
public:
	 static void func(int a)
	{
		m_age = a;
		//m_bge = a;  // m_bge是非静态成员变量，静态成员函数访问不到它。why？因为每实例化一个对象，其中都有m_bge，但是静态成员函数不知道m_bge到底是
		                      //哪个对象的，所以无法进行。
		cout << m_age << endl;
	}


	static int m_age;
	int m_bge;
};

int  Person::m_age = 100;  //Person:: 让编译器明白变量m_age是Person作用域下的静态变量
void test01();
int main()
{
	test01();
	return 0;
}
void test01()
{
	Person::func(10);
    
}