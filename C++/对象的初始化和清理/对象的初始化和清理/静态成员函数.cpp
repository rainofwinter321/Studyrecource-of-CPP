#include<iostream>
#include<string>
using namespace std;

class Person {
public:
	 static void func(int a)
	{
		m_age = a;
		//m_bge = a;  // m_bge�ǷǾ�̬��Ա��������̬��Ա�������ʲ�������why����Ϊÿʵ����һ���������ж���m_bge�����Ǿ�̬��Ա������֪��m_bge������
		                      //�ĸ�����ģ������޷����С�
		cout << m_age << endl;
	}


	static int m_age;
	int m_bge;
};

int  Person::m_age = 100;  //Person:: �ñ��������ױ���m_age��Person�������µľ�̬����
void test01();
int main()
{
	test01();
	return 0;
}
void test01()
{
	Person::func(10);
    
}