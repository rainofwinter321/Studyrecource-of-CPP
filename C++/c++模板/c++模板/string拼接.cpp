#include<iostream>
#include<string>
using namespace std;

void test()
{
	/*1. +=*/

	/*2. append����*/
	string s;
	s.append("hello");
	s.append("world nihao", 5);//���ַ���ǰ5���ַ�ƴ�ӵ�sβ
	/*ע�������ж����ַ�������*/
	/*�������� const string&s*/
	string s1;
	s1.append(s, 1, 2);/*append(const string&s,int pos,n)  ��s�еĵ�pos+1���ַ������n���ַ��������ӵ�s1��β��*/

	cout << s1 << endl;
	cout << s << endl;
}

int main()
{
	test();
	return 0;
}