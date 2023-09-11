#include<iostream>
#include<string>
using namespace std;
class Animal
{
public:
	virtual void speak() = 0;//纯虚函数,抽象类
	Animal()
	{
		cout << "Animal的构造函数" << endl;
	}
	virtual ~Animal()//变成虚析构，就会走子类中的析构函数，why？
	{
		cout << "Animal的析构函数" << endl;
	}
};
//子类
class Cat:public Animal
{
public:
	virtual void speak()
	{
		cout << "猫叫" << endl;
	}
	Cat(string name)
	{
		m_Name = new string(name);
		cout << *m_Name;
		cout << "猫的构造函数" << endl;

	}
	~Cat()
	{
		cout << "猫的析构函数" << endl;
		if (m_Name != NULL)
		{
			delete m_Name;
			m_Name = NULL;
		}
	}

	//子类对象中，成员属性开辟在堆区

	string* m_Name;//猫的名称
};

void test01();

int main()
{
	test01();

	return 0;
}
void test01()
{
	Animal * a = new Cat("Tom"); //父类引用指向子类对象
	//or父类指针指向对象：Animal *p= new Cat；
	// 父类指针指向子类对象，子类对象的析构函数不会调用？
	a->speak(); //父类引用or指针调用子类对象中的虚函数
	delete a;
}