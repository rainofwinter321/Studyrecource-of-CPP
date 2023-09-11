#pragma once
#include<iostream>
using namespace std;


class Sales_data
{
	friend istream& read(istream& is, Sales_data& item);
	friend ostream& print(ostream& os, const Sales_data& item);
	friend Sales_data add(Sales_data& item1, Sales_data& item2);


public:
	Sales_data() = default;
	Sales_data(const string&s) : bookNo(s){}
	Sales_data(const string&s) : bookNo(s),unit_sold(0),revenue(0){}
	inline double avg_price()const
	{
		return unit_sold ? revenue / unit_sold : 0;
	}

	string isbn()const//const的作用：表示this是一个指向常量的指针，像这样使用const的成员函数称作常量成员函数。
	{
		return bookNo;
	}
	Sales_data& combine(const Sales_data&);//成员函数类内声明，类外初始化
	//将一个Sales_data对象加到另一个对象上,参数列表中 const作用使得形参只读不可改。对于不修改的操作，可以防止误操作
private:
	string bookNo;//对象isbn码
	unsigned unit_sold = 0;//售出的数量
	double revenue = 0.0;//总价格
};

istream& read(istream& is, Sales_data& item);
ostream& print(ostream& os, const Sales_data& item);
Sales_data add(Sales_data& item1, Sales_data& item2);

