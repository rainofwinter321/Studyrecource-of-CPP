#include<iostream>
#include<string>
using namespace std;
//1.ʹ��һ���Ѿ�������ϵĶ����ʼ���¶���

//2.ֵ���ݵķ�ʽ������������ֵ

//3.ֵ��ʽ���ؾֲ����� 
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

void dow(Person p)
{

}
Person dw()
{
	Person p1;
	return p1;/*��Ϊp1 �Ǿֲ�����������һ����Ϊ����ֵ*/
}
void test()
{
	//ʹ��һ���Ѿ�������ϵĶ����ʼ���¶���
	//Person p1(10);
	//Person p2(p1);
	// ֵ���ݵķ�ʽ������������ֵ
	//Person p;
	//dow(p);//�βθ���һ�ݸ�ʵ��

	//����ֵ
	dw();//ͬ��Ҳ�Ǹ���һ��
}



int main()
{
	test();


	return 0;
}