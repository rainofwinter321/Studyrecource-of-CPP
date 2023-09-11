#include<iostream>
using namespace std;
//函数模板
//语法
template<typename T>//声明一个虚拟类型T
void Swap(T& a, T& b) //注意函数模板的声明和定义放在一起写，不分文件写。
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
template<typename S>
void func()
{
	cout << "func 调用" << endl;
}


void test01();

int main()
{
	int a = 1, b = 2;
	//模板的使用方式
	//1.自动推导类型
	//Swap(a, b);
	//2.显示指定类型
	Swap<int>(a,b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	/*函数模板的注意事项 
	1.自动推导出的类型必须一致
	2.模板声明中的虚拟类型T必须有。如果函数有参数，编译器可以自动推导出数据类型，如果是无参函数。
	只能显示指令类型，让T有具体的类型*/
	test01();
	return 0;
}

void test01()
{
	func<double>();
}
