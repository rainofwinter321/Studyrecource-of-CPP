#include<set>
#include<iostream>
#include<string>
using namespace std;

void printset(set<int>& s1)
{
	for (auto it = s1.begin(); it != s1.end(); ++it)
	{
		cout << *it << endl;
	}
}


void test()
{
	set<int>s1;/*Ĭ�Ϲ���*/
	
	/*set ��������ֻ��insert��ֻ��һ��������*/
	s1.insert(10);
	s1.insert(20);
	//s1.insert(10);/*set ����������ظ���ֵ*/
	s1.insert(5);
	s1.insert(12);/*set �����Զ�����Ĭ������*/
	
	//printset(s1);
	set<int>s2(s1);/*��������*/
	printset(s2);

}

void test01()
{
	/*�����ɾ������
	intsert();
	clear() �������Ԫ��
	erase(pos) ɾ��pos������ָ���Ԫ�أ�������һλ�õĵ�����
	erase(begin,end) ɾ��[begin,end) �ڵ�Ԫ�أ�����end������
	erase(elem) ɾ�������е�ĳ��ָ��Ԫ��*/
	set<int>s1;
	for (int i=0; i!=10;i++)
	{
		s1.insert(i);
	}
	/*������ͳ��
	find(key)  ����key�Ƿ���ڣ����ڷ�����������������ڷ���end
	cout��key��ͳ��Ԫ��key����*/
	cout << "s1��2�ĸ���:" << s1.count(2);


}
/*set ��mutiset������*/
void test02()
{
	/*1. set �������ظ�����ֵ������mutiset����*/


}
/*���� pair ���ݳɶԳ���*/
void test03()
{
	/*1.pair<type,type>s(,)*/
	pair<string, int>s1("�����", 500);
	/*2.pair<type,type>s=make_pair(,)*/
	pair<string, int>s2 = make_pair("wan", 20);
}



int main()
{
	test01();

	return 0;
}