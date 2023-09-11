#include<iostream>
#include<string>
using namespace std;
//创建一个学生类，属性有姓名和学号，行为有显示姓名和学号,在行为中赋值
class Student {
	//公共权限
public:
	//属性
	string Name;
	int Id;
	//行为
	void _Set(string name,int id)
	{
		Name = name;
		Id = id;

	}
	void _Showstudent()
	{
		cout << "姓名：" << Name << " " << "学号：" << Id << endl;
	}

};
int main()
{
	//创建一个具体的学生
	Student s1;
	//赋值
	s1._Set("张三", 1);
	//显示学生姓名和学号
	s1._Showstudent();

	return 0;
}