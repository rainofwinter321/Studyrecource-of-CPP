#include<iostream>
#include<deque>
using namespace std;

void test01()
{
	deque<int>mydeque;//Ĭ�Ϲ���
	for (int i = 1; i < 8; i++)
	{
		mydeque.push_back(i);
	}
	deque<int>q1(10, 0);//10����0����
	deque<int>q2(mydeque.begin(), mydeque.end());//��������Χ��������mydeque��Ԫ�ؿ�����q2��
	deque<int>q3(q2);//�������캯����

	for (deque<int>::const_iterator it = mydeque.begin(); it != mydeque.end(); ++it)//const���Ϊֻ����������޸�Ԫ�ز�����
	{
		cout << *it;
	}
}
//��ֵ���� q1=q2��assign(begin,end),assign(n,t)