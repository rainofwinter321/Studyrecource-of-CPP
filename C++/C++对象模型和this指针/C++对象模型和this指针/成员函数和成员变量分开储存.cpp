#include<iostream>
#include<string>
using namespace std;
//��Ա�����ͳ�Ա�����ֿ��洢
//��̬��Ա�����������У�ͨ��������ڴ��С���жϡ�
class Person
{
public:
	Person() {
		//mA = 0;
	}
	//
	//int mA;
	//
	//static int mB;
	//
	void func()//�Ǿ�̬��Ա����Ҳ �����������ͨ��thisָ�������á�
	{

	}
};

void test01();
int main()
{
	test01();
	return 0;
}
void test01() {
	Person p;
	cout << "�ڴ��С��" << sizeof(p) << endl; //�ն���Ĵ�СΪ1���Ǳ�����Ϊ�����ֿն��������ڴ档

}
