#include<map>
#include<iostream>
using namespace std;
/*
，Map通常也可以理解为关联数组（associative array）,
就是每一个值都有一个键与之一一对应，
因此，map也是不允许重复元素出现的。*/

void test()
{
	map<char, int>s;
	/*map中的值成对出现，键-值pair */
	/*常用接口：size 获得元素数量
	insert
	pair<iterator,bool> insert (const value_type& val);*/
	s.insert(pair<char, int>('d', 4));
	/*iterator erase (iterator position);

     iterator erase (iterator first, iterator last);*/

	/*iterator find (const value_type& val) const;
	    查找,根据键来查找*/
	cout << s.find('d')->first << endl;
	cout << s.count('d');//根据 键，统计这个元素的个数
}

int main()
{
	test();

	return 0;
}