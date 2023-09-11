#include<iostream>
using namespace std;
//赋值运算符重载
//编译器默认的拷贝构造函数是浅拷贝，会重复释放内存。用深拷贝,=的重载
class Person {
public:
	Person(int age) {
		m_Age = new int(age);

	 }
	~Person() {
		if (m_Age != NULL)
		{
			delete m_Age;
		}
	}
	Person& operator=(Person& p)
	{
		//先判断堆区是否有属性在堆区，释放干净，再深拷贝。
		if (m_Age != NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}
		m_Age = new int(*p.m_Age);//深拷贝，申请一个新空间。

		return *this;//返回这个对象的引用，便于连等。也是链式编程
	}



	int * m_Age;//放在堆区便于维护
};

void test01();

int main()
{
	test01();
	return 0;
}
void test01() {
	Person p1(18);
	Person p2(20);
	p2 = p1;//系统提供的拷贝构造是浅拷贝。
	cout << "p1的age：" << *p1.m_Age << endl;
	cout << "p2的age：" << *p2.m_Age << endl;
	
}