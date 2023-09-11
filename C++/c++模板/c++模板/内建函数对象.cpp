#include<iostream>
#include<vector>
#include<functional>
#include<algorithm>
using namespace std;

 void test()
{
	vector<int>v;
	for (int i = 1; i != 10; i++)
	{
		v.push_back(i * 10);
	}
	/*内建的关系仿函数，是一个函数模板，传入不同的参数生产不同类，再匿名生成函数对象，生成一个谓词*/
	sort(v.begin(), v.end(), greater<int>());
	for (auto c : v)
	{
		cout << c << endl;
	}
}

int main()
{
	test();

	return 0;
}