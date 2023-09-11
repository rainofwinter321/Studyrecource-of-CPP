#include<iostream>
#include<string>
using namespace std;

class Person
{
public:
	/*对于类中返回姓名和地址的操作，函数是否应该是const的？
	要使用const，因为这些函数并不改变它调用的对象的内容。
	const 的作用是 让this 变为一个常量指针，不能通过this改变函数中的内容，因为这是一个只读作用的函数*/
	string getname()const { return m_Name; }
	string getaddress()const { return m_Address; }

	string m_Name;
	string m_Address;
};

istream& read(istream& is, Person& item)
{
	
	is >> item.m_Name>> item.m_Address;
	
	return is;
}
ostream& print(ostream& os, const Person& item)
{
	os << item.m_Name << " " << item.m_Address << endl;
	return os;
}

void test()
{
	Person p;
	if (read(cin, p))
	{
		print(cout, p);
	}
}

int main()
{
	test();


	return 0;
}