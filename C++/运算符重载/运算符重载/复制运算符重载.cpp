#include<iostream>
using namespace std;
//复制运算符重载
class Person {
public:
	Person(int age) {
		m_Age = new int(age); //指向堆区
	}

	~Person() {//自动释放
		if (m_Age != NULL)
		{
			delete m_Age;
		}
	}
	Person& operator=(Person& p)
	{
		//深拷贝？
		m_Age = new int(*p.m_Age);
		//返回值是？如果有多个"=",就要返回函数本身所属的对象的引用。因为参数也是引用。
		return *this;
	}




	int* m_Age;
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
	Person p3(22);
	 p3=p2=p1;//编译器默认"="对相同类型的对象进行属性拷贝，但是这只是浅拷贝。
	cout << "p1的age=" << *p1.m_Age << endl;//编译器报错了，因为堆区的内存重复释放了。怎么解决?
	cout << "p2的age=" << *p2.m_Age << endl;//对"="进行重载，进行深拷贝。
	cout << "p3的age=" << *p3.m_Age << endl;
}