#include<iostream>
#include<string>
using namespace std;

void test01()
{
	/*1.=��ֵ*/
	/*2.string s1,s2;s1=s2*/
	/*assign*/
	string s = "hello world!";
	string s1;
	s1.assign("helloc++", 5);//���ַ�����ǰn���ַ���ֵ��s1������c���Է���ַ���
	string s2;
	s2.assign(s1.begin(), s1.end());//��s1��������Χ�ڵ�Ԫ�ظ�ֵ��s2����������Χ�ڵ�Ԫ�ز�����s2����Ϊ�ڽ��и�ֵʱ��������ʧЧ��
	cout << s2<< endl;
}

int main()
{
	test01();
	return 0;
}