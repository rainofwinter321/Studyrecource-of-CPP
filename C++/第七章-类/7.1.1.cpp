#include<iostream>
#include"7.1.1.h"
#include<string>
using namespace std;



Sales_data& Sales_data::combine(const Sales_data& sr)
{
	/*combine 类似+=的操作，调用该函数的对象是赋值运算符的左侧对象，而右侧是传入的参数*/
	/*由于在类作用于下 combine 中可以直接使用类中的成员属性*/
	unit_sold += sr.unit_sold;
	revenue += sr.revenue;

	return *this;  //返回调用该函数的对象，也就是左侧对象，this指针指向调用该函数的对象
}
istream& read(istream& is, Sales_data& item)
{
	double price = 0;
	is >> item.bookNo >> item.unit_sold >> price;
	item.revenue = price * item.unit_sold;
	return is;
}
ostream& print(ostream& os, const Sales_data& item)
{
	os << item.isbn() << " " << item.unit_sold << " " << item.revenue << endl;
}
Sales_data add(Sales_data& item1, Sales_data& item2)//返回值类型不能是引用，因为我们返回的是一个副本。
{
	Sales_data tmp = item1;
	tmp.combine(item2);
	return tmp;

}
void test()
{
	Sales_data total;
	if (read(cin,total))
	{
		Sales_data trans;

		while (read(cin,trans))
		{
			if (total.bookNo == trans.bookNo)
			{
				total.unit_sold += trans.unit_sold;

				total.revenue += trans.revenue;

			}
			else
			{
				cout <<"当前这本书的销售记录：" << total.bookNo << " " << total.unit_sold << " " << total.revenue << endl;

				total = trans;

			}
		}
	}
	else
	{
		cout << "No data" << endl;
	}
}

int main()
{
	test();

	return 0;
}