#include<iostream>
using namespace std;

class Base1 {//����
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;

};

class son1 : public Base1//�����̳�
{
public:
	void  func()
	{
		m_A = 10;//�����еĹ���Ȩ�� ����������Ȼ�ǹ���Ȩ��
		m_B = 10;//�����еı���Ȩ�� ����������Ȼ�Ǳ���Ȩ��
		m_C = 10;//�����е�˽��Ȩ�� ������ʲ���
	}

};

class son2 : protected Base1//�����̳�
{
public:
	void  func()
	{
		m_A = 10;//�����еĹ���Ȩ�� �������б�ɱ���Ȩ��
		m_B = 10;//�����еı���Ȩ�� ����������Ȼ�Ǳ���Ȩ��
		m_C = 10;//�����е�˽��Ȩ�� ������ʲ���
	}
};

void test01();
void test02();
int main()
{


	return 0;
}

void test01()
{
	son1 s1;
	s1.m_B = 20;//�����еı���Ȩ�� ����������Ȼ�Ǳ���Ȩ��
}
void test02()
{
	son2 s2;
	s2.m_A = 100;//�����̳��£������еĹ����ͱ���ȫ��Ϊ����
}

//˽�м̳��£������ͱ�����Ϊ˽�С�