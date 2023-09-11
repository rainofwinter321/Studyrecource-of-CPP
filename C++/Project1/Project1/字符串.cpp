#include<iostream>
#include<string>
using namespace std;
//string 类型知识点
//一cin输入string ，在缓冲区遇到空格或换行符或制表符，会停止
//二 getline读取一整行，读取一整行，期间遇到空格或tab不会停止，直到遇到换行符
//getline函数和cin一样，也会返回它的流参数，也就是cin，所以可以用getline循环读取一行
//当string对象和字符或字符串字面值相加时，必须确保+号的两侧的运算对象至少有一个string。
int main()
{
	string name;
	getline(cin, name);
	
	for (auto& r : name)
	{
		cout << r;
	}
	
	


	return 0;
}