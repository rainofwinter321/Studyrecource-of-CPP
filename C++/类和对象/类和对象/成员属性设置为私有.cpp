#include<iostream>
#include<string>
using namespace std;
//成员属性设置为私有
// 可以自己控制成员的读写权限
//可以检测数据的有效性
class person
{
public:
	void stename(string name)
	{
		m_Name = name;
	}
	string getname()
	{
		return m_Name;
	}
	//只读年龄,年龄在0~100的范围内
	int getage()
	{
		return age;
	}
	// 情妇只写
	void setlover(string lover)
	{
		m_lover = lover;
	}
private:       
	//姓名   可读可写，利用一个接口public
	string m_Name;
	//年龄   只读
	int age=20;
	//情妇   只写
	string m_lover;

};




int main()
{
	person s1;
	s1.stename("曾沛慈");
	cout << s1.getname() << endl;

	return 0;
}