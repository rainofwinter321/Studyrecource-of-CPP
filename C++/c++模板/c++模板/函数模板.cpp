#include<iostream>
using namespace std;
//����ģ��
//�﷨
template<typename T>//����һ����������T
void Swap(T& a, T& b) //ע�⺯��ģ��������Ͷ������һ��д�������ļ�д��
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
template<typename S>
void func()
{
	cout << "func ����" << endl;
}


void test01();

int main()
{
	int a = 1, b = 2;
	//ģ���ʹ�÷�ʽ
	//1.�Զ��Ƶ�����
	//Swap(a, b);
	//2.��ʾָ������
	Swap<int>(a,b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	/*����ģ���ע������ 
	1.�Զ��Ƶ��������ͱ���һ��
	2.ģ�������е���������T�����С���������в����������������Զ��Ƶ����������ͣ�������޲κ�����
	ֻ����ʾָ�����ͣ���T�о��������*/
	test01();
	return 0;
}

void test01()
{
	func<double>();
}
