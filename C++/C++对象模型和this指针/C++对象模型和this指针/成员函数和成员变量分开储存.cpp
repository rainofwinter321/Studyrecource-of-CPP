#include<iostream>
#include<string>
using namespace std;
//成员变量和成员函数分开存储
//静态成员变量不在类中，通过对象的内存大小来判断。
class Person
{
public:
	Person() {
		//mA = 0;
	}
	//
	//int mA;
	//
	//static int mB;
	//
	void func()//非静态成员函数也 不属于类对象，通过this指针来调用。
	{

	}
};

void test01();
int main()
{
	test01();
	return 0;
}
void test01() {
	Person p;
	cout << "内存大小：" << sizeof(p) << endl; //空对象的大小为1，是编译器为了区分空对象分配的内存。

}
