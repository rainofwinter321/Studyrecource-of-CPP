#include<iostream>
using namespace std;
//�������������
class Person {
public:
	Person(int age) {
		m_Age = new int(age); //ָ�����
	}

	~Person() {//�Զ��ͷ�
		if (m_Age != NULL)
		{
			delete m_Age;
		}
	}
	Person& operator=(Person& p)
	{
		//�����
		m_Age = new int(*p.m_Age);
		//����ֵ�ǣ�����ж��"=",��Ҫ���غ������������Ķ�������á���Ϊ����Ҳ�����á�
		return *this;
	}




	int* m_Age;
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
	Person p3(22);
	 p3=p2=p1;//������Ĭ��"="����ͬ���͵Ķ���������Կ�����������ֻ��ǳ������
	cout << "p1��age=" << *p1.m_Age << endl;//�����������ˣ���Ϊ�������ڴ��ظ��ͷ��ˡ���ô���?
	cout << "p2��age=" << *p2.m_Age << endl;//��"="�������أ����������
	cout << "p3��age=" << *p3.m_Age << endl;
}