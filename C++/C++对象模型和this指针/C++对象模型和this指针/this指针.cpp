#include<iostream>
#include<string>
using namespace std;
//thisָ��
class Person {
public:
	Person(int age)
	{
	   this->	age = age;//this ָ��ָ�� �����ú��������Ķ���
	  }
	Person& personadd(Person& p)
	{
		this->age += p.age;
		return *this;  //�������ͱ��������ã������ֵ���൱����һ���µĶ��󣬶�����ԭ���Ķ���p2,p3,p4........
	}

	int age;//һ���Ա�������ββ�Ҫͬ��
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