#include<iostream>
using namespace std;
//��ֵ���������
//������Ĭ�ϵĿ������캯����ǳ���������ظ��ͷ��ڴ档�����,=������
class Person {
public:
	Person(int age) {
		m_Age = new int(age);

	 }
	~Person() {
		if (m_Age != NULL)
		{
			delete m_Age;
		}
	}
	Person& operator=(Person& p)
	{
		//���ж϶����Ƿ��������ڶ������ͷŸɾ����������
		if (m_Age != NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}
		m_Age = new int(*p.m_Age);//���������һ���¿ռ䡣

		return *this;//���������������ã��������ȡ�Ҳ����ʽ���
	}



	int * m_Age;//���ڶ�������ά��
};

void test01();

int main()
{
	test01();
	return 0;
}
void test01() {
	Person p1(18);
	Person p2(20);
	p2 = p1;//ϵͳ�ṩ�Ŀ���������ǳ������
	cout << "p1��age��" << *p1.m_Age << endl;
	cout << "p2��age��" << *p2.m_Age << endl;
	
}