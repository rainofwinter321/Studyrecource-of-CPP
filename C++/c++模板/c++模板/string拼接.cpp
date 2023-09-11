#include<iostream>
#include<string>
using namespace std;

void test()
{
	/*1. +=*/

	/*2. append函数*/
	string s;
	s.append("hello");
	s.append("world nihao", 5);//把字符串前5个字符拼接到s尾
	/*注意括号中都是字符字面量*/
	/*括号中是 const string&s*/
	string s1;
	s1.append(s, 1, 2);/*append(const string&s,int pos,n)  从s中的第pos+1个字符往后的n的字符，都连接到s1的尾部*/

	cout << s1 << endl;
	cout << s << endl;
}

int main()
{
	test();
	return 0;
}