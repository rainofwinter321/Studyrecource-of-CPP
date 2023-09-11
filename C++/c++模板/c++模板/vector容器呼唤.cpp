#include<iostream>
#include<vector>
using namespace std;

void test()
{
	vector<int>v1(10, 1);
	vector<int>v2(10, 0);
	for (auto c : v1)
	{
		cout << c;
	}
	cout << endl;
	for (auto c : v2)
	{
		cout << c;
	}
	cout << endl;
	swap(v1, v2);
	for (auto c : v1)
	{
		cout << c;
	}
	cout << endl;
	for (auto c : v2)
	{
		cout << c;
	}
}
/*实际用途*/
//巧用swap搜索内存空间
void test02()
{
	vector<int>v1(10000, 1);
	/*size 和 capacity 的区别 一个是容器内元素的数量，一个是系统给容器预留的空间，不管什么插入，capacity总是大于size*/
	v1.resize(3);//使得size为3，但是capacity不变。此时v1所占内存太大了
	vector<int>(v1).swap(v1);

	cout << v1.size() << endl << v1.capacity() << endl;
	//使用匿名对象，构造了一个大小为3的vector容器，然后与原来的v1交换，使得原来的v1指向空间为3的容器，内存大的容器
	//归匿名对象，匿名对象程序结束，析构函数，自动销毁。

}
int main()
{
	test02();

	return 0;
}