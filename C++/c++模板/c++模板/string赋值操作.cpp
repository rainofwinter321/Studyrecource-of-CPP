#include<iostream>
#include<string>
using namespace std;

void test01()
{
	/*1.=赋值*/
	/*2.string s1,s2;s1=s2*/
	/*assign*/
	string s = "hello world!";
	string s1;
	s1.assign("helloc++", 5);//把字符串的前n个字符赋值给s1，仅限c语言风格字符串
	string s2;
	s2.assign(s1.begin(), s1.end());//把s1迭代器范围内的元素赋值给s2，迭代器范围内的元素不能是s2，因为在进行赋值时，迭代器失效。
	cout << s2<< endl;
}

int main()
{
	test01();
	return 0;
}