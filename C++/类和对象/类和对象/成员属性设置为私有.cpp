#include<iostream>
#include<string>
using namespace std;
//��Ա��������Ϊ˽��
// �����Լ����Ƴ�Ա�Ķ�дȨ��
//���Լ�����ݵ���Ч��
class person
{
public:
	void stename(string name)
	{
		m_Name = name;
	}
	string getname()
	{
		return m_Name;
	}
	//ֻ������,������0~100�ķ�Χ��
	int getage()
	{
		return age;
	}
	// �鸾ֻд
	void setlover(string lover)
	{
		m_lover = lover;
	}
private:       
	//����   �ɶ���д������һ���ӿ�public
	string m_Name;
	//����   ֻ��
	int age=20;
	//�鸾   ֻд
	string m_lover;

};




int main()
{
	person s1;
	s1.stename("�����");
	cout << s1.getname() << endl;

	return 0;
}