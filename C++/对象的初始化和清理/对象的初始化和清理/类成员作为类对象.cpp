#include<iostream>
#include<string>
using namespace std;  
class Phone {
public:
	Phone(string name)
	{
		m_phonename = name;
		cout << "调用Phone构造函数" << endl;
		   }
	~ Phone()
	{
		cout << "调用phone的析构函数" << endl;
	}

	string m_phonename;
};

class Person {
public:
	Person(string name, string nma) :m_name(name), m_phone(nma)//Phone m_phone=nma;   这是构造函数的隐式转化法
	{
		cout << "调用Person的构造函数" << endl;
	   }
	~Person()
	{

		cout << "调用person的析构函数" << endl;
	}

	//姓名，手机
	string m_name;
	   Phone m_phone;
};

void test0()
{
	Person p("曾沛慈", "华为");

}

int main()
{
	test0();

	return 0;
}
//通过实验得知，先创建Phone再创建Person.
//先调用phone的析构再调用person的析构。 
//因为对象p在栈中，所以符合“先入后出”的规律。

