#include<iostream>
using namespace std;
//�������������()
//�������غ�ʹ�õķ�ʽ�ǳ�����ʹ�ã���˳�Ϊ�º���
//�º���û�й̶�д�����ǳ����
class Myprint {
public:

	void operator()(string text)
	{
		cout << text << endl;
	}

};

void test01();

int main()
{

	test01();

	return 0;
}

void test01()
{
	//���ص�()������Ҳ��Ϊ�º�����
	Myprint print;
	print("hello world!");
	Myprint()("���");//������С���ţ�����һ�������ĺ����������꼴�ͷš�

}
