#include<iostream>
using namespace std;
//左移运算符重载"<<"
//通过全局函数比较方便实现重载
class Person {
	      friend  ostream& operator<<(ostream& cout, Person& p);
public:
	Person(int a, int b) {//有参构造函数，初始化成员属性
		m_A = a;
		m_B = b;

	}
private://成员属性私有化
	int m_A;
	int m_B;
};
void test01();
ostream&  operator<<(ostream& cout, Person& p);//cout 是类ostream的对象，输出流<<操作两个对象本质是调用全局函数

int main()
{
	test01();

	return 0;
}
void test01()
{
	Person p(10, 20);

	cout << p;

}

ostream& operator<<(ostream& cout, Person& p) {//返回ostream& 是一种链式思想，这样cout就能用多个<<
	cout << "m_A=" << p.m_A << endl;
	cout << "m_B=" << p.m_B << endl;

	return cout;
}