#include<iostream>
using namespace std;

int add(int a, int b)
{
	return a + b;
}
template<typename T>
int myadd(T a,T b)
{
	return a + b;
}

int main()
{
	int a = 10, b = 20;
	char c = 'A';
	//cout << add(a, c);//普通函数发生隐式类型转换
	//cout << myadd(a, c);//原则，自动类型推导出的类型必须一致
	cout << myadd<int>(a, c);

	return 0;
}