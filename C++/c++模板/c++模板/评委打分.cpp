#include<iostream>
#include<vector>
#include<deque>
#include<algorithm>
using namespace std;
//有五个选手ABCDE，5名评委分别打分，去除最高分和最低分，求平均
class Person {
public:
	Person(int a)
	{
		this->avgscore = a;
	}

	int avgscore;
};

void test()
{
	vector<Person>sve(5);
	for (auto it=sve.begin();it!=sve.end();++it)
	{
		deque<int>q;
		for (int i = 0; i < 5; i++)
		{
			int score;
			cin >> score;
			q.push_back(score);
			
		}
		//排序
		sort(q.begin(), q.end());
		//删除最大值最小值
		q.pop_back();
		q.pop_front();
		int sum = 0;
		for (auto c : q)
		{
			sum += c;
		}
		(*it).avgscore = sum / 3;//相信取整
	}
	

}