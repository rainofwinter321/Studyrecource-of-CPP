#include<iostream>
#include<algorithm>
#include<vector>
#include<list>
using namespace std;


class myprint
{
public:
	void operator()(int val)
	{
		cout << val << endl;
	}
};
class Transform {
public:
	int operator()(int val)
	{
		return val;
	}
};
void test()
{
	vector<int>v;
	list<int>sl;
	for (int i = 0; i != 10; i++)
	{
		v.push_back(i * 10);
		sl.push_back(i * 10);/*对于非顺序容器也可以*/
	}
	/*for_each(迭代器，迭代器，函数或者仿函数
	注意，传入三个参数，函数传入函数名*/
	//for_each(v.begin(), v.end(), print);
	for_each(sl.begin(), sl.end(), myprint());
}
void test01()
{
	vector<int>v;
	for (int i = 0; i != 10; i++)
	{
		v.push_back(i * 10);
	}
	vector<int>vtarget;
	vtarget.resize(v.size());/*目标容器需要提前开辟空间，预开辟*/

	/*transform 搬运容器中的元素到另一个容器
	参数列表：iterater beg1,iterater end1,iterater beg2,_func
	_func 作用是在搬运过程中对元素做一些简单运算，注意传入什么类型返回什么类型*/
	transform(v.begin(), v.end(), vtarget.begin(), Transform());
	for_each(vtarget.begin(), vtarget.end(), myprint());
	
}


int main()
{
	test01();

	return 0;
}