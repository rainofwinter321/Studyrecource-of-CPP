#include<iostream>
using namespace std;

class Person1
{
public:
	void showperson1()
	{
		cout << "����showperson1" << endl;
	}
};

class Person2
{
public:
	void showperson2()
	{
		cout << "����showperson2" << endl;
	}
};
template<typename T>
class Myclass
{
public:
	T obj;
	
	void func1()
	{
		obj.showperson1();
	}
	void func2()
	{
		obj.showperson2();
	}
};
void test1() {
	Myclass<Person1>m;//��ģ���г�Ա������ֻ������ģ��ʵ�����Żᴴ��
	m.func1();
	m.func2();

}


int main()
{
	test1();

	return 0;
}