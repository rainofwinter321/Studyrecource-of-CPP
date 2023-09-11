#include<iostream>
using namespace std;
//递增运算符重载
class Myinter {
	friend  ostream& operator<<(ostream& cout, Myinter p);
public:
	Myinter() {
		m_Num = 10;
	}
	//前置++重载,返回引用为了对一个数进行操作
	Myinter& operator++()
	{//先++
		m_Num++;
		//后返回这个对象
			return *this;
	}
	//后置++
	Myinter operator++(int) {//函数重载的知识：同一作用域下，同一函数名，参数的个数，类型，顺序不同，返回值不影响。
		 //先返回，再++？//占位参数int，只写类型，后续调用函数时，不用写入参数也行。
		//先记录当时结果
		Myinter temp = *this;
		m_Num++;
		return  temp;//局部变量，在函数执行完后释放了，如果返回引用就是非法操作，而返回值相当复制一份。
		
	}

private:
	int m_Num;
};

void test();
ostream& operator<<(ostream& cout, Myinter p);//cout 是类ostream的对象，输出流<<操作两个对象本质是调用全局函数
void test01();


int main()
{
	//test();
	test01();

	return 0;
}
void test() {
	
	Myinter myint;
	cout << ++(++myint);//因为myint是我自己自定义的一种类型，不是内置类型，所以要对<<进行重载。
	cout << myint << endl;
	

}

ostream& operator<<(ostream& cout, Myinter p)//cout 是类ostream的对象，输出流<<操作两个对象本质是调用全局函数
{

	cout << "m_Num=" << p.m_Num << endl;
	return cout;
}
void test01()
{
	Myinter myint;
	cout <<(myint++ );//返回值
	cout << myint;

}
