#include<iostream>
using namespace std;
//��̳�
//�ؼ���virtual 
//�ײ㣺Sheep��Tuo�����ϼ̳���һ��vbptr=virtual base pointer ������һ��ָ��vbtable��ָ��

class Animal{
public:
	Animal()
	{
		m_Age = 19;
	}

	int m_Age;
};
//����
class Sheep :virtual public Animal{};
//������
class Tuo:virtual public Animal{};
//����
class sheeptuo:public Sheep,public Tuo{};

void test01();

int main()
{
	test01();
	return 0;

}
void test01()
{
	sheeptuo p;
	cout << p.m_Age;//������ ,�������������
}