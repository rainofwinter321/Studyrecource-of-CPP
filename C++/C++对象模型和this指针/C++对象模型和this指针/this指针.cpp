#include<iostream>
#include<string>
using namespace std;
//this指针
class Person {
public:
	Person(int age)
	{
	   this->	age = age;//this 指针指向 被调用函数所属的对象
	  }
	Person& personadd(Person& p)
	{
		this->age += p.age;
		return *this;  //返回类型必须是引用，如果是值，相当创建一个新的对象，而不是原来的对象，p2,p3,p4........
	}

	int age;//一般成员变量和形参不要同名
};
void test01()
{
	Person p(10);
	Person p1(20);

	p.personadd(p1).personadd(p1).personadd(p1);

	cout << p.age << endl;
}
int main()
{
	test01();

	return 0;
}