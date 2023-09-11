#include<iostream>
#include<string>
using namespace std;

void test01()
{
	string str = "abcdefgde";//int find(string s,int pos)
	int pos=str.rfind("de");// find 返回找到的字符串的第一个下标，int类型。如果没有返回-1
	//rfind 从右往左查找，find从左往右找
	cout << pos << endl;
	
}
//替换
void test02()
{
	string str("abcdefg");
	str.replace(1, 3, "11");//把（a，b）范围的字符替换称传入的str
	cout << str << endl;
}

int main()
{
	test02();
	return 0;
}