#include<iostream>
#include<string>
using namespace std;

class Person {
public:
	Person()
	{
		cout << "���ù��캯��" << endl;
		this->m_age = 20;
	}
	Person(int age) {
		m_age = age;
		cout << "�вι��캯������" << endl;
	}
	/*Person(const Person& p) {
		m_age = p.m_age;
		cout << "�������캯������" << endl;
	}*/
	
	bool cmp( Person p )
	{
		if (this->m_age == p.m_age)
		{
			return true;
		}
		else
		{
			false;
		}
	}
	~Person() {
		cout << "������������" << endl;
	}


	int m_age;

};
//����
void test01()
{
	//1.���ŷ�,��������ʱ�����캯���Զ�����.ͬʱ�������м����������Person ���ͱ����������вκͿ���
	Person p;//Ĭ�ϣ������С���ţ���������Ϊ����һ����������
	//Person p1(20);//����20 �����вι��캯��
	//Person p2(p1);//�������캯��

	//2.��ʾ��
	//Person p1 = Person(10);
	//Person p2 = Person(p1);
	//Person(10);//��������,û������
	//ע�������Ҫ�ÿ������캯����ʼ����������
	//3. ��ʽת����
	//Person p3 = 10;//�൱�� Person p3=Person (10);
	
	if (p.cmp(Person(10)))
	{
		cout<<"age���"<<endl;
	}
	else
	{
		cout<<"age�����"<<endl;
	}
	
}




int main()
{
	test01();
	return 0;
}