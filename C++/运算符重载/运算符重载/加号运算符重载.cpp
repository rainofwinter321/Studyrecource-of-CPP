#include<iostream>
using namespace std;
//�Ӻ����������
/*һ�������ó�Ա����ʵ��
����������ȫ�ֺ���ʵ��*/
class Person {
/*public:
	Person operator+(Person p) {//ͨ����Ա����ʵ���˼Ӻ���������أ��������ú�����Ϊoperato+,ʵ��p3=p1+p2��Ч��
		//����һ����ʱ����
		Person temp;
		temp.m_A = this->m_A + p.m_A;//thisָ�������ÿһ����Ա�����У�ָ����������������������
		temp.m_B = this->m_B + p.m_B;
		return temp;
	}*/

public:
	int m_A;
	int m_B;
};
void test01();
Person operator+(Person &p1,Person &p2) {//ͨ��ȫ�ֺ���ʵ���˼Ӻ���������أ��������ú�����Ϊoperato+,ʵ��p3=p1+p2��Ч��
	//����һ����ʱ����
	Person temp;
	temp.m_A = p1.m_A + p2.m_A;
	temp.m_B = p1.m_B + p2.m_B;
	return temp;//���ܷ������ã���Ϊ��ʱ������ջ�С�
}
int main()
{
	test01();

	return 0;
}

void test01() {
	Person p1;
	Person p2;
	p1.m_A = 10;
	p1.m_B = 20;
	p2.m_A = 10;
	p2.m_B = 20;

	Person p3 = p1+p2;//��ôʵ��p3�е�m_A����p1+p2�е��أ�
	//����һ����һ����Ա������
	cout << p3.m_A << endl << p3.m_B << endl;


}
