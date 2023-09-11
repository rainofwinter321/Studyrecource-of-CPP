#include<iostream>
using namespace std;
//函数调用运算符()
//由于重载后使用的方式非常像函数使用，因此称为仿函数
//仿函数没有固定写法，非常灵活
class Myprint {
public:

	void operator()(string text)
	{
		cout << text << endl;
	}

};

void test01();

int main()
{

	test01();

	return 0;
}

void test01()
{
	//重载的()操作符也称为仿函数。
	Myprint print;
	print("hello world!");
	Myprint()("你好");//类名加小括号，创建一个匿名的函数对象，用完即释放。

}
