#include<iostream>
#include<vector>
#include<deque>
#include<algorithm>
using namespace std;
//�����ѡ��ABCDE��5����ί�ֱ��֣�ȥ����߷ֺ���ͷ֣���ƽ��
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
		//����
		sort(q.begin(), q.end());
		//ɾ�����ֵ��Сֵ
		q.pop_back();
		q.pop_front();
		int sum = 0;
		for (auto c : q)
		{
			sum += c;
		}
		(*it).avgscore = sum / 3;//����ȡ��
	}
	

}