#include<iostream>
#include<string>
using namespace std;  
class Phone {
public:
	Phone(string name)
	{
		m_phonename = name;
		cout << "����Phone���캯��" << endl;
		   }
	~ Phone()
	{
		cout << "����phone����������" << endl;
	}

	string m_phonename;
};

class Person {
public:
	Person(string name, string nma) :m_name(name), m_phone(nma)//Phone m_phone=nma;   ���ǹ��캯������ʽת����
	{
		cout << "����Person�Ĺ��캯��" << endl;
	   }
	~Person()
	{

		cout << "����person����������" << endl;
	}

	//�������ֻ�
	string m_name;
	   Phone m_phone;
};

void test0()
{
	Person p("�����", "��Ϊ");

}

int main()
{
	test0();

	return 0;
}
//ͨ��ʵ���֪���ȴ���Phone�ٴ���Person.
//�ȵ���phone�������ٵ���person�������� 
//��Ϊ����p��ջ�У����Է��ϡ����������Ĺ��ɡ�

