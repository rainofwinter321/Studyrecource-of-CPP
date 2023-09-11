#include<iostream>
#include<string>
using namespace std;
/*cpu，显卡，内存条。
1.分别把这些零件封装称抽象类，提供给不同厂商（inter和Amd）生产不同零件（多态的含义）
2.创建电脑类，提供电脑工作函数，并且调用每个零件的接口
3.测试时，组装三种不同的电脑运行工作*/

//cpu抽象类
class CPU
{
public:
	virtual void caculate() = 0;//纯虚函数
};
//显卡
class XD
{   
public:
	virtual void Dispaly() = 0;//纯虚函数
};
//内存条
class Store
{
public:
	virtual void store() = 0;//纯虚函数
};

//电脑类
class Computer
{
public:
	Computer(CPU*A,XD*B,Store*C)//零件指针
	{
		a = A;
		b = B;
		c = C;
		
	}
	//work
	void dowork()
	{
		a->caculate();
		b->Dispaly();
		c->store();
	}
	~Computer()
	{
		if (a != NULL)
		{
			delete a;
			a = NULL;
		}
		if (b != NULL)
		{
			delete b;
			b = NULL;
		}
		if (c!= NULL)
		{
			delete c;
			c = NULL;
		}
	}
	CPU* a; XD* b; Store* c;
};

//厂商类

	class incpu : public CPU//不要忘了继承
	{
		virtual void caculate()//重写虚函数
		{
			cout << "incpu is caculating" << endl;
		}
	};
	class inxd :public XD
	{
	public:
		virtual void Dispaly()
		{
			cout << "inxd is moving" << endl;
		}
	};
	class instore : public Store {
	public:
		virtual void store()
		{
			cout << "instore is using" << endl;
		}
	};



int main()
{//多态的应用
	CPU * in = new incpu;
	XD * xd = new inxd;
	Store * st = new  instore;//父类指针指向子类对象。

	Computer* inter1 = new Computer(in, xd, st);
	inter1->dowork();
	//堆区的内存释放,三个零件的内存也要释放，怎么办呢？ 加一个析构函数。
	delete inter1;
	

	return 0;
}
