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
	ofs.open("test.txt", ios::out);//不写路径，默认和项目在同一文件夹下。
	ofs << "hello！";
	ofs.close();
	  
}