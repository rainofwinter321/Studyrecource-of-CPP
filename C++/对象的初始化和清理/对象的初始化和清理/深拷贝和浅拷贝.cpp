#include<iostream>
#include<string>
using namespace std;

class Person {
public:
	Person() {
		cout << "调用默认构造函数" << endl;
	}
	Person(int age, int height) {
		m_age = age;
		m_height=new int(height);
		cout << "有参构造函数调用" << endl;
	}
	/*Person(const Person& p) {
		m_age = p.m_age;
		cout << "拷贝构造函数调用" << endl;
	}*/
	Person(const Person& p)
	{
		m_age = p.m_age;
		m_height = new int(*p.m_height);
	}
	~Person() {
		//利用析构函数来释放在堆区的空间，很明显，析构函数调用了两次，都去销毁堆区的空间
		if (m_height != NULL)
		{
			delete m_height;
			m_height = NULL;
		}
		cout << "调用析构函数" << endl;
	}


	int m_age;
	int* m_height;//用指针的原因？
};

void test01();

int main()
{
	test01();

	return 0;
}

void test01()
{
	Person p1(10,180);
	cout << p1.m_age <<"身高："<<*p1.m_height<< endl;
	Person p2(p1);
	cout << p2.m_age << endl;



}