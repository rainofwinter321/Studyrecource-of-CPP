#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class cmp
{
public:
	bool operator()(int v1, int v2)
	{
		return v1 > v2;
	}
};

void test()
{
	vector<int>v;
	for (int i=1;i!=10;i++)
	{
		v.push_back(i * 10);
	}
	/*���÷º������޸�sort���������*/
	sort(v.begin(), v.end(),cmp());/*cmp()��������*/
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