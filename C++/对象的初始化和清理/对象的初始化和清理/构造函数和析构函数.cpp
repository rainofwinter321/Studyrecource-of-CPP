#include<iostream>
#include<string>
using namespace std;
//������
class Person {
	// ���캯������Ҫ����ֵ������дvoid
	//������������ͬ
	//�����в�������������
	//��������ʱ���������Զ�����һ��
public:
	Person() {
		cout << "���ù��캯��" << endl;
	}
	// ������������Ҫ����ֵ������дvoid
	//������������ͬ
	//�����޲���������������
	//��������ǧ���������Զ�����һ��
	~Person() {
		cout << "������������" << endl;
	}
};



int main()
{
	Person p;
	return 0;
}