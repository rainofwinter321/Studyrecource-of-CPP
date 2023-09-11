#include<set>
#include<iostream>
#include<string>
using namespace std;
/*set 内置类型的排序*/
/*利用仿函数，编写排序*/
class mycompare/*仿函数本质上是一个类*/
{
public:
	
	bool operator() (int v1, int v2)const/*函数重载*/
	{
		return v1 > v2;
	}


};
void test()
{
	set<int,mycompare>s;
	s.insert(10);
	s.insert(50);
	s.insert(20);
	s.insert(60);
	s.insert(30);
	for (auto it = s.begin(); it != s.end(); ++it)
	{
		cout << *it << endl;
	}
}

int main()
{
	test();
	return 0;
}