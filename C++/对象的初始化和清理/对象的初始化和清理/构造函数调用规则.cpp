#include<iostream>
#include<string>
using namespace std;
/*1.Ĭ�Ϲ��캯�����޲Σ�������Ϊ�գ�
2. Ĭ�������������޲Σ�������Ϊ�գ�
3.Ĭ�Ͽ������캯���������Խ��п���*/
class Person {
public:
	Person() {
		cout << "����Ĭ�Ϲ��캯��" << endl;
	}
	Person(int age) {
		m_age = age;
		cout << "�вι��캯������" << endl;
	}
	Person(const Person& p) {
		m_age = p.m_age;
		cout << "�������캯������" << endl;
	}
	~Person() {
		cout << "������������" << endl;
	}


	int m_age;

};



void test();
int main()
{
	test();

	return 0;

}
void test()
{
	Person p(10);//��������Լ��������вι��죬��ô�������������Ĭ�Ϲ��죬���ǿ���������Ȼ�ṩ
	Person p1(p);//�������д�˿������죬�����������ṩ������ͨ����
	cout << "age:" << p1.m_age << endl;
}