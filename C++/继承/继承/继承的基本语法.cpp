#include<iostream>
using namespace std;
//�̳У������ظ�����̫�ࡣ
//����վҳ��Ϊ����ҳ���кܶ��֣�������һ�������������ͬ�ġ�
class BasePage
{
public:

	//����
};

//javaҳ��
class Java :public BasePage//�̳�BasePage
{
	//����
public:
	void content()//java ���е����ԣ����Բ��ִ��벻����д�ˡ�
	{
		cout << "Java��ѧϰ��Ƶ" << endl;
	}

};

