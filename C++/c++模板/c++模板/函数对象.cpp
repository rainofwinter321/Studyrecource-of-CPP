#include<iostream>
using namespace std;

class myadd
{
public:
	myadd()
	{
		this->count = 0;
	}
	int operator()(int v1, int v2)
	{
		this->count++;
		return v1 + v2;
	}

	int count;
};
void doprint(myadd& Add, int v1, int v2)
{
	cout<<Add(v1, v2);
}

void test()
{
	/*1.函数对象像普通函数那样，有返回值和参数*/
	myadd Add;
	//cout << "10+10=" << Add(10, 10);
	/*2.函数对象有自己的状态，比如记录函数调用的次数*/
	//cout << "count=" << Add.count;
	/*函数对象可以作为参数进行传递*/
	doprint(Add, 20, 30);
}

int main()
{
	test();


	return 0;
}