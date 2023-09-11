#include<iostream>
using namespace std;
void myprint(int a, int b)
{
	cout << "调用普通函数" << endl;
}
template<typename T>
void myprint(T a, T b)
{
	cout << "调用函数模板的实例" << endl;
}

int main()
{
	//第一种情况
	myprint(1, 1);
	//第二种情况
	myprint<>(1, 1);
	char c1 = 'a', c2 = 'b';
	myprint(c1, c2);

	return 0;
}