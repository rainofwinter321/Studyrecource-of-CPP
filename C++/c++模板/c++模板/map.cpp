#include<map>
#include<iostream>
using namespace std;
/*
��Mapͨ��Ҳ�������Ϊ�������飨associative array��,
����ÿһ��ֵ����һ������֮һһ��Ӧ��
��ˣ�mapҲ�ǲ������ظ�Ԫ�س��ֵġ�*/

void test()
{
	map<char, int>s;
	/*map�е�ֵ�ɶԳ��֣���-ֵpair */
	/*���ýӿڣ�size ���Ԫ������
	insert
	pair<iterator,bool> insert (const value_type& val);*/
	s.insert(pair<char, int>('d', 4));
	/*iterator erase (iterator position);

     iterator erase (iterator first, iterator last);*/

	/*iterator find (const value_type& val) const;
	    ����,���ݼ�������*/
	cout << s.find('d')->first << endl;
	cout << s.count('d');//���� ����ͳ�����Ԫ�صĸ���
}

int main()
{
	test();

	return 0;
}