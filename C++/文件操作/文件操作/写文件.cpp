#include< iostream>
#include<fstream>
using namespace std;

void test01();

int main()
{
	test01();

	return 0;
}
void test01()
{
	ofstream ofs;
	ofs.open("test.txt", ios::out);//��д·����Ĭ�Ϻ���Ŀ��ͬһ�ļ����¡�
	ofs << "hello��";
	ofs.close();
	  
}