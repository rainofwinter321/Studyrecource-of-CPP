#include<set>
#include<iostream>
#include<string>
using namespace std;
/*set �������͵�����*/
/*���÷º�������д����*/
class mycompare/*�º�����������һ����*/
{
public:
	
	bool operator() (int v1, int v2)const/*��������*/
	{
		return v1 > v2;
	}


};
void test()
{
	set<int,mycompare>s;
	s.insert(10);
	s.insert(50);
	s.insert(20);
	s.insert(60);
	s.insert(30);
	for (auto it = s.begin(); it != s.end(); ++it)
	{
		cout << *it << endl;
	}
}

int main()
{
	test();
	return 0;
}