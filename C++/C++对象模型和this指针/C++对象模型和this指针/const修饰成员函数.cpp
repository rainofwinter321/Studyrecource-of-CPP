#include<iostream>
#include<string>
using namespace std;

class Person {
public:
	// this ָ�뱾�ʵ� ָ�볣�� ��ָ��ָ�򲻿ɸ�   
	//const Person*const this;
	// �ڳ�Ա�������const�����ε���this��ָ��ָ���ֵҲ�����޸�
	void showPerson()const//������
	{
		m_B = 200;
		m_A = 100;
		this = NULL;
	}
	
	int m_A;
	mutable int m_B;//�ó����������޸�
};

void test01()
{
	Person p;
	p.showPerson();
}
void test02()
{
	const Person pp;//������,ֻ�ܵ��ó�����
	pp.m_A = 500;//���ɸ�
	pp.m_B = 45;
}

int main()
{
	test01();


	return 0;
}



	