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
	/*�ڽ��Ĺ�ϵ�º�������һ������ģ�壬���벻ͬ�Ĳ���������ͬ�࣬���������ɺ�����������һ��ν��*/
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