#include<iostream>
using namespace std;

class myadd
{
public:
	myadd()
	{
		this->count = 0;
	}
	int operator()(int v1, int v2)
	{
		this->count++;
		return v1 + v2;
	}

	int count;
};
void doprint(myadd& Add, int v1, int v2)
{
	cout<<Add(v1, v2);
}

void test()
{
	/*1.������������ͨ�����������з���ֵ�Ͳ���*/
	myadd Add;
	//cout << "10+10=" << Add(10, 10);
	/*2.�����������Լ���״̬�������¼�������õĴ���*/
	//cout << "count=" << Add.count;
	/*�������������Ϊ�������д���*/
	doprint(Add, 20, 30);
}

int main()
{
	test();


	return 0;
}