#include"顺序容器.h"

/*1.push_back*/
void test()
{
	string word;
	vector<string> continor;
	while (cin >> word)
	{
		continor.push_back(word);
	}
	for (auto c : continor)
	{
		cout << c << " ";
	}
	
}
/*2.push_front 注意在头部插入元素，只有list，deque支持*/
void test01()
{
	list<int>arr;
	for (size_t ix = 0; ix != 4; ++ix)
		arr.push_front(ix);
	for (auto c : arr)
	{
		cout << c << " ";
	}
}
/*3.在特定位置插入元素，insert
将元素插入到vector，string，deque的任何位置是合法的，但是这很耗时。原因是它们的内部数据结构*/
void test02()
{
	vector<string>stve = { "world" };
	list<string>slist = { "world" };

	stve.insert(stve.begin(), "hello ");
	slist.insert(slist.begin(), "Helle ");
	for (auto c : stve)
		cout << c;
	cout << endl;
	for (auto a : slist)
		cout << a;
}
/*4.在范围内插入元素,注意：
不能把svet范围内的元素再插入到svet中；
插入的元素一般是类型一致的；*/
void test03()
{
	vector<string>svet = { "tom" };
	list<string>ilist = { "hello ","good ","night " };
	//c.insert(c,n,t) 把n个元素t插入到迭代器c之前的位置
	svet.insert(svet.begin(), 10, "jerry ");
	//把容器ilist(b,e)范围内的元素插入到svet中
	svet.insert(svet.end(), ilist.begin(), ilist.end());
	
	for (auto c : svet)
	{
		cout << c;
	}

}
void test04()
{
	list<int>ilist = { 1,2,3,4,5,6,7,8,9,10 };
	deque<int>q1;
	deque<int>q2;
	for (auto c : ilist)
	{
		if (c % 2 == 0)
			q2.push_back(c);
		else
			q1.push_back(c);
	}
	
}
/*使用insert的返回值，可以在容器中的特定位置反复插入元素*/
void test05()
{
	list<string>ilst;
	string word;
	auto iter = ilst.begin();
	while (cin >> word)
	{
		iter = ilst.insert(iter, word);
	}
	for (auto c : ilst)
	{
		cout << c;
	}
}
void test06()
{
	vector<int> ivec = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	auto iter = ivec.begin();
	while (iter != ivec.end()) {
		++iter;
		/* iter = */ivec.insert(iter, 42);//由于没有返回insert的迭代器，那么插入操作会使得迭代器失效，因为现在迭代器iter没有指向任何一个元素
		//如果it=insert（）；那么编译器知道iter指向什么了，没有失效
		++iter;
	}
	
	for (auto c : ivec)
	{
		cout << c << " ";
	}
}



int main()
{
	test06();
	return 0;
}