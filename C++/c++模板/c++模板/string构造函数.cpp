#include<iostream>
#include<string>
using namespace std;
void test01()
{
	string str;
	const char* str = "hello";
	string s1(str);//�вι���
	string s2(s1);//��������
	string s3(10, 'a');//��ʼ��Ϊ10��a

}