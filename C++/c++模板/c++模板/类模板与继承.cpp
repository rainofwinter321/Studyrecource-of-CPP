#include<iostream>
using namespace std;
//子类继承父类（类模板），需要传入指定类型，不然系统无法给子类分配内存。
template<typename T>
class myclass {
public:
	T m;
};

class son :public myclass<int> {
	
};
//如果像灵活指定父类的类型，子类也要是类模板
template<typename T1,typename T2>
class Son :public myclass<T2> {
	T1 obj;
};
