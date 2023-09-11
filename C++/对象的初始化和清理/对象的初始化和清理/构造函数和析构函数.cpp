#include<iostream>
#include<string>
using namespace std;
//创建类
class Person {
	// 构造函数不需要返回值，不用写void
	//函数名与类相同
	//可以有参数，可以重载
	//创建对象时，函数会自动调用一次
public:
	Person() {
		cout << "调用构造函数" << endl;
	}
	// 析构函数不需要返回值，不用写void
	//函数名与类相同
	//可以无参数，不可以重载
	//对象销毁千，函数会自动调用一次
	~Person() {
		cout << "调用析构函数" << endl;
	}
};



int main()
{
	Person p;
	return 0;
}