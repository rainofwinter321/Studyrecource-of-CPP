#include<iostream>
#include<string>
using namespace std;

const double PI = 3.14;
//比如设计一个圆类，求圆的周长。半径r是圆的属性
class circle {
	//访问权限，公共权限
public:
	//属性
	double r;
	//行为，比如求周长。用一个函数来实现
	double zhouchang()
	{
		return 2 * PI * r;
	}
};

int main()
{
	//通过圆类，创建一个具体的圆
	//实例化：通过类，创建一个具体的对象
	circle c1;
	//对属性赋值
	c1.r = 10;
	//操作求圆的周长
	cout << "圆的周长是：" << c1.zhouchang() << endl;

	return 0;
}