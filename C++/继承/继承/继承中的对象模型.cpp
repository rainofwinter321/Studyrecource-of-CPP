#include<iostream>
using namespace std;
//�Ӹ����м̳й����ĳ�Ա����Щ�����������
class Base//����
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;//˽��Ȩ���������Ǳ����أ���Ҳ��̳С�
};
class Son1 :public Base
{
public:
	int m_D;
};
void test01();

int main()
{
	test01();

	return 0;
}

void test01()
{
	//���������зǾ�̬��Ա���Զ��ᱻ����̳���ȥ��
	cout << "sizeof son=" << sizeof(Son1) << endl;//���16��why��˵��Son1�����ĸ�int

}
/*����Developer Command Prompt VS2022 �鿴����ģ��
��ת�̷� F: (����ļ�����Ĭ���̾Ͳ�����ת��
��ת�ļ�·�� cd�ո����·��
�鿴���� cl�ո�/d1 reportSingleClassLayout�뿴������ �ļ���*/