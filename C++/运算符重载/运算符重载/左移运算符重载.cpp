#include<iostream>
using namespace std;
//�������������"<<"
//ͨ��ȫ�ֺ����ȽϷ���ʵ������
class Person {
	      friend  ostream& operator<<(ostream& cout, Person& p);
public:
	Person(int a, int b) {//�вι��캯������ʼ����Ա����
		m_A = a;
		m_B = b;

	}
private://��Ա����˽�л�
	int m_A;
	int m_B;
};
void test01();
ostream&  operator<<(ostream& cout, Person& p);//cout ����ostream�Ķ��������<<���������������ǵ���ȫ�ֺ���

int main()
{
	test01();

	return 0;
}
void test01()
{
	Person p(10, 20);

	cout << p;

}

ostream& operator<<(ostream& cout, Person& p) {//����ostream& ��һ����ʽ˼�룬����cout�����ö��<<
	cout << "m_A=" << p.m_A << endl;
	cout << "m_B=" << p.m_B << endl;

	return cout;
}