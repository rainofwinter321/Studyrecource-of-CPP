#include"Person.hpp"
/*类模板份文件编写出现的问题
类模板中成员函数只有在调用时才会创建，编译时并不会创建
那么调用时，编译器只看到Person.h中内容，没有创建成员函数。
*/
//解决方法 把类模板的声明和实现写在一个hpp文件中，就是把.h改成hpp
void test()
{
	Person<string, int>p("张三", 18);
	p.showperson();
}

int main()
{
	test();
	return 0;
}