#include<iostream>
#include<deque>
using namespace std;

void test01()
{
	deque<int>mydeque;//默认构造
	for (int i = 1; i < 8; i++)
	{
		mydeque.push_back(i);
	}
	deque<int>q1(10, 0);//10个‘0’。
	deque<int>q2(mydeque.begin(), mydeque.end());//迭代器范围拷贝，把mydeque的元素拷贝给q2；
	deque<int>q3(q2);//拷贝构造函数。

	for (deque<int>::const_iterator it = mydeque.begin(); it != mydeque.end(); ++it)//const标记为只读，如果想修改元素不可以
	{
		cout << *it;
	}
}
//赋值操作 q1=q2，assign(begin,end),assign(n,t)