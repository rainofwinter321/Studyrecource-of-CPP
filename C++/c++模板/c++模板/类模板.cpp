#include<iostream>
#include<string>
using namespace std;
//����һ����ģ��
template<typename Myname,typename Age>//ģ�����Ͳ����б��п�����һ������ģ�����Ͳ���
class Person
{
public:
	Person(Myname name,Age age)
	{
		this->m_age = age;
		this->m_name = name;
	}


	Myname m_name;
	Age m_age;
};
//��ģ�岻��ʹ���Զ������Ƶ���ֻ����ʾָ������
//��ģ���е�ģ�����Ͳ����б������Ĭ�ϲ���
void test1()
{
	Person<string,int> p1("�Ű�", 100);
}


int main()
{



	return 0;
}