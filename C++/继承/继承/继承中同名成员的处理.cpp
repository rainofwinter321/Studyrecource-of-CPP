#include<iostream>
using namespace std;
//�Ǿ�̬��Աͬ������
class Base {
public:
	/*Base()
	{
		m_A = 10;

	}
	void func()
	{
		cout << "Base-func" << endl;
	}
	void func(int a)
	{
		cout << "Base-func" << endl;
	}
	int m_A;*/
	//��̬��Աͬ���أ�
	static void func()
	{
		cout << "Base" << endl;
	}
	

	static int m_A;
};
int Base:: m_A = 20;

class son :public Base {
public:
	/*son() {

		m_A = 20;
    
	}
	void func()
	{
		cout << "son-func" << endl;
	}*/
	static void func()
	{
		cout << "son" << endl;
	}



	static int m_A;
};
int son::m_A = 30;

void test01();

int main()
{
	test01();
	return 0;
}
void test01()
{
	son s1;
	//cout << "son-m_A=" << s1.m_A << endl; 
	//cout << "Base - m_A = " << s1.Base::m_A << endl;//ͨ�����ࣨ���󣩷��ʸ���ͬ��,��һ��������ҵ�������
	//s1.func();
	//s1.Base:: func();//ͬ��Ҳ��������
	//s1.Base::func(1);
	//ͨ��������ʸ���ͬ����Ա
	cout << "son-m_A=" << s1.m_A << endl;
	cout << "Base-m_A=" << s1.Base::m_A << endl;
	//ͨ���������ʾ�̬��Ա
	cout << "Base-m_A=" << son::Base::m_A << endl;//ͨ���������Base�������µ�m_A

	s1.func();
	s1.Base::func();
}