#include<set>
#include<iostream>
#include<string>
using namespace std;

void printset(set<int>& s1)
{
	for (auto it = s1.begin(); it != s1.end(); ++it)
	{
		cout << *it << endl;
	}
}


void test()
{
	set<int>s1;/*默认构造*/
	
	/*set 容器插入只有insert，只能一个个放入*/
	s1.insert(10);
	s1.insert(20);
	//s1.insert(10);/*set 不允许插入重复的值*/
	s1.insert(5);
	s1.insert(12);/*set 容器自动排序，默认升序*/
	
	//printset(s1);
	set<int>s2(s1);/*拷贝构造*/
	printset(s2);

}

void test01()
{
	/*插入和删除操作
	intsert();
	clear() 清空所有元素
	erase(pos) 删除pos迭代器指向的元素，返回下一位置的迭代器
	erase(begin,end) 删除[begin,end) 内的元素，返回end迭代器
	erase(elem) 删除容器中的某个指定元素*/
	set<int>s1;
	for (int i=0; i!=10;i++)
	{
		s1.insert(i);
	}
	/*查找与统计
	find(key)  查找key是否存在，存在返回其迭代器，不存在返回end
	cout（key）统计元素key个数*/
	cout << "s1中2的个数:" << s1.count(2);


}
/*set 和mutiset的区别*/
void test02()
{
	/*1. set 不可以重复插入值，但是mutiset可以*/


}
/*对组 pair 数据成对出现*/
void test03()
{
	/*1.pair<type,type>s(,)*/
	pair<string, int>s1("孙悟空", 500);
	/*2.pair<type,type>s=make_pair(,)*/
	pair<string, int>s2 = make_pair("wan", 20);
}



int main()
{
	test01();

	return 0;
}