#include<iostream>
#include<string>
using namespace std;
/*cpu���Կ����ڴ�����
1.�ֱ����Щ�����װ�Ƴ����࣬�ṩ����ͬ���̣�inter��Amd��������ͬ�������̬�ĺ��壩
2.���������࣬�ṩ���Թ������������ҵ���ÿ������Ľӿ�
3.����ʱ����װ���ֲ�ͬ�ĵ������й���*/

//cpu������
class CPU
{
public:
	virtual void caculate() = 0;//���麯��
};
//�Կ�
class XD
{   
public:
	virtual void Dispaly() = 0;//���麯��
};
//�ڴ���
class Store
{
public:
	virtual void store() = 0;//���麯��
};

//������
class Computer
{
public:
	Computer(CPU*A,XD*B,Store*C)//���ָ��
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

//������

	class incpu : public CPU//��Ҫ���˼̳�
	{
		virtual void caculate()//��д�麯��
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
{//��̬��Ӧ��
	CPU * in = new incpu;
	XD * xd = new inxd;
	Store * st = new  instore;//����ָ��ָ���������

	Computer* inter1 = new Computer(in, xd, st);
	inter1->dowork();
	//�������ڴ��ͷ�,����������ڴ�ҲҪ�ͷţ���ô���أ� ��һ������������
	delete inter1;
	

	return 0;
}
