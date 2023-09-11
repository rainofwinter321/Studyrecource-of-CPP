#include<iostream>
using namespace std;
//从父类中继承过来的成员，哪些属于子类对象？
class Base//父类
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;//私有权限属性这是被隐藏，但也会继承。
};
class Son1 :public Base
{
public:
	int m_D;
};
void test01();

int main()
{
	test01();

	return 0;
}

void test01()
{
	//父类中所有非静态成员属性都会被子类继承下去。
	cout << "sizeof son=" << sizeof(Son1) << endl;//输出16，why？说明Son1包含四个int

}
/*利用Developer Command Prompt VS2022 查看对象模型
跳转盘符 F: (如果文件就在默认盘就不用跳转）
跳转文件路径 cd空格具体路径
查看命令 cl空格/d1 reportSingleClassLayout想看的类名 文件名*/