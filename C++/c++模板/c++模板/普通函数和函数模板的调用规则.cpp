#include<iostream>
using namespace std;
void myprint(int a, int b)
{
	cout << "������ͨ����" << endl;
}
template<typename T>
void myprint(T a, T b)
{
	cout << "���ú���ģ���ʵ��" << endl;
}

int main()
{
	//��һ�����
	myprint(1, 1);
	//�ڶ������
	myprint<>(1, 1);
	char c1 = 'a', c2 = 'b';
	myprint(c1, c2);

	return 0;
}