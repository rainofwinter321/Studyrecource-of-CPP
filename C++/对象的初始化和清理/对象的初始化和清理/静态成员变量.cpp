#include<iostream>
#include<string>
using namespace std;

class Person {
public:
	static int m_age;

};

int  Person:: m_age=100;  //Person:: �ñ��������ױ���m_age��Person�������µľ�̬����
void test01();

int main()
{
	test01();

	return 0;
}

void test01()
{
	Person p;
	cout << p.m_age << endl;
	Person p1;
	p1.m_age = 500;
	cout << p1.m_age << endl;

	//ͨ���������ʾ�̬����
	//cout << Person::m_age << endl;
}