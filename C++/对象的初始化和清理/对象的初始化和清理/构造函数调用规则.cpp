#include<iostream>
#include<string>
using namespace std;
/*1.默认构造函数（无参，函数体为空）
2. 默认析构函数（无参，函数体为空）
3.默认拷贝构造函数，对属性进行拷贝*/
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



void test();
int main()
{
	test();

	return 0;

}
void test()
{
	Person p(10);//如果我们自己定义了有参构造，那么编译器不再提高默认构造，但是拷贝构造任然提供
	Person p1(p);//如果我们写了拷贝构造，编译器不再提供其他普通函数
	cout << "age:" << p1.m_age << endl;
}