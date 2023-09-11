#include<iostream>
using namespace std;

template<typename T>
bool Compare(T& a, T& b)
{
	if (a == b)
		return true;

	return false;
}

void test1()
{
	int a = 10, b = 20;
	if (Compare(a, b))
	{
		cout << "a=b" << endl;
	}
	else
	{
		cout << "a!=b" << endl;
	}
}
//�����Զ�������ͣ�ģ���о����ԡ�
//����ʹ�þ��廯�ĺ���ģ��������Զ������͵�����
class Person
{
public:

	Person(int a)
	{
		this->m_age = a;
	}

	int m_age;
};
template<>bool Compare(Person& a, Person& b)//����дһ����������µĺ���ģ�壬��������������ȵ�����.
{
	if (a.m_age == b.m_age)
	{
		return true;
	}
	return false;
}

void test2()
{
	Person p1(10);
	Person p2(12);
	if (Compare(p1, p2))
	{
		cout << "p1=p2" << endl;
	}
	else
	{
		cout << "p1!=p2" << endl;
	}
}


int main()
{
	test2();
	return 0;
}