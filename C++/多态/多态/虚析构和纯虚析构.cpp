#include<iostream>
#include<string>
using namespace std;
class Animal
{
public:
	virtual void speak() = 0;//���麯��,������
	Animal()
	{
		cout << "Animal�Ĺ��캯��" << endl;
	}
	virtual ~Animal()//������������ͻ��������е�����������why��
	{
		cout << "Animal����������" << endl;
	}
};
//����
class Cat:public Animal
{
public:
	virtual void speak()
	{
		cout << "è��" << endl;
	}
	Cat(string name)
	{
		m_Name = new string(name);
		cout << *m_Name;
		cout << "è�Ĺ��캯��" << endl;

	}
	~Cat()
	{
		cout << "è����������" << endl;
		if (m_Name != NULL)
		{
			delete m_Name;
			m_Name = NULL;
		}
	}

	//��������У���Ա���Կ����ڶ���

	string* m_Name;//è������
};

void test01();

int main()
{
	test01();

	return 0;
}
void test01()
{
	Animal * a = new Cat("Tom"); //��������ָ���������
	//or����ָ��ָ�����Animal *p= new Cat��
	// ����ָ��ָ�������������������������������ã�
	a->speak(); //��������orָ�������������е��麯��
	delete a;
}