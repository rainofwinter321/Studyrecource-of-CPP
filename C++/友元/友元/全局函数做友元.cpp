#include<iostream>
#include<string>
using namespace std;

class Buliding {
	friend class Goodfriend;//同理
	//friend void Goodfriend:: visit(); 一定要加作用域，告诉是谁的成员函数
	friend void goodgay(Buliding& building);//goodgay全局函数作为Buliding的友元，在类中做一个声明，加上friend关键字
public:
	/*Buliding()
	{
		m_sroom = "客厅";
		m_bedroom = "卧室";
	}*/
	Buliding(); //先在类中声明一下
		
public:
	string m_sroom;
private:
	string m_bedroom;
};
//类外写成员函数？类名:: +函数
Buliding::Buliding() {

	m_sroom = "客厅";
	m_bedroom = "卧室";
}
class Goodfriend {
public:
	void visit();//访问Buliding中属性
	Goodfriend();//在类外定义构造函数，必须在类中声明，否则编译器不允许。
	Buliding* building;

};
Goodfriend::Goodfriend()
{
	building = new Buliding;

}
void  Goodfriend::visit() {

	cout << "好友访问：" << building->m_bedroom<< endl;
}
//全局函数
void goodgay(Buliding& building)//访问私有属性？
{
	cout << "好基友 访问：" << building.m_sroom << endl;
	cout << "好基友 访问：" << building.m_bedroom << endl;
}
int main()
{
	//Buliding p;
	//goodgay(p);
	Goodfriend g;
	g.visit();

	return 0;
}