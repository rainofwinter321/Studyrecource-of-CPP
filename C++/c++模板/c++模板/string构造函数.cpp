#include<iostream>
#include<string>
using namespace std;
void test01()
{
	string str;
	const char* str = "hello";
	string s1(str);//有参构造
	string s2(s1);//拷贝构造
	string s3(10, 'a');//初始化为10个a

}