#include<iostream>
#include<list>
using namespace std;

void test()
{
	list<int>List(3, 2);
	cout << "list��Ԫ��" << endl;
	List.push_front(10);
	List.push_front(15);
	List.push_back(20);
	List.push_back(25);
	for (auto c : List)
	{
		cout << c << " ";
	}
	cout << endl;
	List.reverse();/*sort ����Ĭ������,reverse����ǰ������Ԫ�ؽ���λ��*/
	for (auto c : List)
	{
		cout << c << " ";
	}
}

int main()
{
	test();

	return 0;
}