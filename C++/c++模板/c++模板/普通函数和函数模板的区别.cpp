#include<iostream>
using namespace std;

int add(int a, int b)
{
	return a + b;
}
template<typename T>
int myadd(T a,T b)
{
	return a + b;
}

int main()
{
	int a = 10, b = 20;
	char c = 'A';
	//cout << add(a, c);//��ͨ����������ʽ����ת��
	//cout << myadd(a, c);//ԭ���Զ������Ƶ��������ͱ���һ��
	cout << myadd<int>(a, c);

	return 0;
}