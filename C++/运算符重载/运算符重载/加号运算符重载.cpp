#include<iostream>
using namespace std;
//加号运算符重载
/*一，可以用成员函数实现
二，可以用全局函数实现*/
class Person {
/*public:
	Person operator+(Person p) {//通过成员函数实现了加号运算符重载，编译器让函数名为operato+,实现p3=p1+p2的效果
		//创建一个临时对象
		Person temp;
		temp.m_A = this->m_A + p.m_A;//this指针包含在每一个成员函数中，指向调用这个函数的所属对象。
		temp.m_B = this->m_B + p.m_B;
		return temp;
	}*/

public:
	int m_A;
	int m_B;
};
void test01();
Person operator+(Person &p1,Person &p2) {//通过全局函数实现了加号运算符重载，编译器让函数名为operato+,实现p3=p1+p2的效果
	//创建一个临时对象
	Person temp;
	temp.m_A = p1.m_A + p2.m_A;
	temp.m_B = p1.m_B + p2.m_B;
	return temp;//不能返回引用，因为临时对象在栈中。
}
int main()
{
	test01();

	return 0;
}

void test01() {
	Person p1;
	Person p2;
	p1.m_A = 10;
	p1.m_B = 20;
	p2.m_A = 10;
	p2.m_B = 20;

	Person p3 = p1+p2;//怎么实现p3中的m_A等于p1+p2中的呢？
	//方法一，用一个成员函数，
	cout << p3.m_A << endl << p3.m_B << endl;


}
