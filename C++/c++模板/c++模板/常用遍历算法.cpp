#include<iostream>
#include<algorithm>
#include<vector>
#include<list>
using namespace std;


class myprint
{
public:
	void operator()(int val)
	{
		cout << val << endl;
	}
};
class Transform {
public:
	int operator()(int val)
	{
		return val;
	}
};
void test()
{
	vector<int>v;
	list<int>sl;
	for (int i = 0; i != 10; i++)
	{
		v.push_back(i * 10);
		sl.push_back(i * 10);/*���ڷ�˳������Ҳ����*/
	}
	/*for_each(�����������������������߷º���
	ע�⣬���������������������뺯����*/
	//for_each(v.begin(), v.end(), print);
	for_each(sl.begin(), sl.end(), myprint());
}
void test01()
{
	vector<int>v;
	for (int i = 0; i != 10; i++)
	{
		v.push_back(i * 10);
	}
	vector<int>vtarget;
	vtarget.resize(v.size());/*Ŀ��������Ҫ��ǰ���ٿռ䣬Ԥ����*/

	/*transform ���������е�Ԫ�ص���һ������
	�����б�iterater beg1,iterater end1,iterater beg2,_func
	_func �������ڰ��˹����ж�Ԫ����һЩ�����㣬ע�⴫��ʲô���ͷ���ʲô����*/
	transform(v.begin(), v.end(), vtarget.begin(), Transform());
	for_each(vtarget.begin(), vtarget.end(), myprint());
	
}


int main()
{
	test01();

	return 0;
}