#include<iostream>
#include<string>
using namespace std;

void test01()
{
	string str = "abcdefgde";//int find(string s,int pos)
	int pos=str.rfind("de");// find �����ҵ����ַ����ĵ�һ���±꣬int���͡����û�з���-1
	//rfind ����������ң�find����������
	cout << pos << endl;
	
}
//�滻
void test02()
{
	string str("abcdefg");
	str.replace(1, 3, "11");//�ѣ�a��b����Χ���ַ��滻�ƴ����str
	cout << str << endl;
}

int main()
{
	test02();
	return 0;
}