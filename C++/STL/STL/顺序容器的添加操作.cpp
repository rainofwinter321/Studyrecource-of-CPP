#include"˳������.h"

/*1.push_back*/
void test()
{
	string word;
	vector<string> continor;
	while (cin >> word)
	{
		continor.push_back(word);
	}
	for (auto c : continor)
	{
		cout << c << " ";
	}
	
}
/*2.push_front ע����ͷ������Ԫ�أ�ֻ��list��deque֧��*/
void test01()
{
	list<int>arr;
	for (size_t ix = 0; ix != 4; ++ix)
		arr.push_front(ix);
	for (auto c : arr)
	{
		cout << c << " ";
	}
}
/*3.���ض�λ�ò���Ԫ�أ�insert
��Ԫ�ز��뵽vector��string��deque���κ�λ���ǺϷ��ģ�������ܺ�ʱ��ԭ�������ǵ��ڲ����ݽṹ*/
void test02()
{
	vector<string>stve = { "world" };
	list<string>slist = { "world" };

	stve.insert(stve.begin(), "hello ");
	slist.insert(slist.begin(), "Helle ");
	for (auto c : stve)
		cout << c;
	cout << endl;
	for (auto a : slist)
		cout << a;
}
/*4.�ڷ�Χ�ڲ���Ԫ��,ע�⣺
���ܰ�svet��Χ�ڵ�Ԫ���ٲ��뵽svet�У�
�����Ԫ��һ��������һ�µģ�*/
void test03()
{
	vector<string>svet = { "tom" };
	list<string>ilist = { "hello ","good ","night " };
	//c.insert(c,n,t) ��n��Ԫ��t���뵽������c֮ǰ��λ��
	svet.insert(svet.begin(), 10, "jerry ");
	//������ilist(b,e)��Χ�ڵ�Ԫ�ز��뵽svet��
	svet.insert(svet.end(), ilist.begin(), ilist.end());
	
	for (auto c : svet)
	{
		cout << c;
	}

}
void test04()
{
	list<int>ilist = { 1,2,3,4,5,6,7,8,9,10 };
	deque<int>q1;
	deque<int>q2;
	for (auto c : ilist)
	{
		if (c % 2 == 0)
			q2.push_back(c);
		else
			q1.push_back(c);
	}
	
}
/*ʹ��insert�ķ���ֵ�������������е��ض�λ�÷�������Ԫ��*/
void test05()
{
	list<string>ilst;
	string word;
	auto iter = ilst.begin();
	while (cin >> word)
	{
		iter = ilst.insert(iter, word);
	}
	for (auto c : ilst)
	{
		cout << c;
	}
}
void test06()
{
	vector<int> ivec = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	auto iter = ivec.begin();
	while (iter != ivec.end()) {
		++iter;
		/* iter = */ivec.insert(iter, 42);//����û�з���insert�ĵ���������ô���������ʹ�õ�����ʧЧ����Ϊ���ڵ�����iterû��ָ���κ�һ��Ԫ��
		//���it=insert��������ô������֪��iterָ��ʲô�ˣ�û��ʧЧ
		++iter;
	}
	
	for (auto c : ivec)
	{
		cout << c << " ";
	}
}



int main()
{
	test06();
	return 0;
}