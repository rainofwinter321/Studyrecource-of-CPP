#include<iostream>
using namespace std;
//非静态成员同名处理
class Base {
public:
	/*Base()
	{
		m_A = 10;

	}
	void func()
	{
		cout << "Base-func" << endl;
	}
	void func(int a)
	{
		cout << "Base-func" << endl;
	}
	int m_A;*/
	//静态成员同名呢？
	static void func()
	{
		cout << "Base" << endl;
	}
	

	static int m_A;
};
int Base:: m_A = 20;

class son :public Base {
public:
	/*son() {

		m_A = 20;
    
	}
	void func()
	{
		cout << "son-func" << endl;
	}*/
	static void func()
	{
		cout << "son" << endl;
	}



	static int m_A;
};
int son::m_A = 30;

void test01();

int main()
{
	test01();
	return 0;
}
void test01()
{
	son s1;
	//cout << "son-m_A=" << s1.m_A << endl; 
	//cout << "Base - m_A = " << s1.Base::m_A << endl;//通过子类（对象）访问父类同名,用一个父类作业域表明。
	//s1.func();
	//s1.Base:: func();//同样也是作用域
	//s1.Base::func(1);
	//通过对象访问父类同名成员
	cout << "son-m_A=" << s1.m_A << endl;
	cout << "Base-m_A=" << s1.Base::m_A << endl;
	//通过类名访问静态成员
	cout << "Base-m_A=" << son::Base::m_A << endl;//通过子类访问Base作用域下的m_A

	s1.func();
	s1.Base::func();
}