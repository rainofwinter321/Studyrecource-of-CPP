#include<iostream>
#include<string>
using namespace std;

class Person {
public:
	Person() {
		cout << "����Ĭ�Ϲ��캯��" << endl;
	}
	Person(int age, int height) {
		m_age = age;
		m_height=new int(height);
		cout << "�вι��캯������" << endl;
	}
	/*Person(const Person& p) {
		m_age = p.m_age;
		cout << "�������캯������" << endl;
	}*/
	Person(const Person& p)
	{
		m_age = p.m_age;
		m_height = new int(*p.m_height);
	}
	~Person() {
		//���������������ͷ��ڶ����Ŀռ䣬�����ԣ������������������Σ���ȥ���ٶ����Ŀռ�
		if (m_height != NULL)
		{
			delete m_height;
			m_height = NULL;
		}
		cout << "������������" << endl;
	}


	int m_age;
	int* m_height;//��ָ���ԭ��
};

void test01();

int main()
{
	test01();

	return 0;
}

void test01()
{
	Person p1(10,180);
	cout << p1.m_age <<"��ߣ�"<<*p1.m_height<< endl;
	Person p2(p1);
	cout << p2.m_age << endl;



}