#include<iostream>
#include<vector>
using namespace std;

void test()
{
	vector<int>v1(10, 1);
	vector<int>v2(10, 0);
	for (auto c : v1)
	{
		cout << c;
	}
	cout << endl;
	for (auto c : v2)
	{
		cout << c;
	}
	cout << endl;
	swap(v1, v2);
	for (auto c : v1)
	{
		cout << c;
	}
	cout << endl;
	for (auto c : v2)
	{
		cout << c;
	}
}
/*ʵ����;*/
//����swap�����ڴ�ռ�
void test02()
{
	vector<int>v1(10000, 1);
	/*size �� capacity ������ һ����������Ԫ�ص�������һ����ϵͳ������Ԥ���Ŀռ䣬����ʲô���룬capacity���Ǵ���size*/
	v1.resize(3);//ʹ��sizeΪ3������capacity���䡣��ʱv1��ռ�ڴ�̫����
	vector<int>(v1).swap(v1);

	cout << v1.size() << endl << v1.capacity() << endl;
	//ʹ���������󣬹�����һ����СΪ3��vector������Ȼ����ԭ����v1������ʹ��ԭ����v1ָ��ռ�Ϊ3���������ڴ�������
	//�������������������������������������Զ����١�

}
int main()
{
	test02();

	return 0;
}