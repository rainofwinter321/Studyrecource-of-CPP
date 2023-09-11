#include<iostream>
#include<string>
using namespace std;
//1.使用一个已经创建完毕的对象初始化新对象

//2.值传递的方式给函数参数传值

//3.值方式返回局部变量 
class Person {
public:
	Person() {
		cout << "调用默认构造函数" << endl;
	}
	Person(int age) {
		m_age = age;
		cout << "有参构造函数调用" << endl;
	}
	Person(const Person& p) {
		m_age = p.m_age;  
		cout << "拷贝构造函数调用" << endl;
	}
	~Person() {
		cout << "调用析构函数" << endl;
	}


	int m_age;

};

void dow(Person p)
{

}
Person dw()
{
	Person p1;
	return p1;/*因为p1 是局部变量，拷贝一份作为返回值*/
}
void test()
{
	//使用一个已经创建完毕的对象初始化新对象
	//Person p1(10);
	//Person p2(p1);
	// 值传递的方式给函数参数传值
	//Person p;
	//dow(p);//形参复制一份给实参

	//返回值
	dw();//同样也是复制一份
}



int main()
{
	test();


	return 0;
}