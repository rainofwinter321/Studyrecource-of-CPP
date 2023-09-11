#include<iostream>
using namespace std;
//多态的原理刨析
//动物类
class Animal
{
public:
	//虚函数
	virtual void speak()
	{
		cout << "动物讲话" << endl;
	}
};
class Cat : public Animal
{
public:
	//重写
	virtual void speak()
	{
		cout << "猫讲话" << endl;
	}
};



void test01(Animal & animal);


int main()
{
	Cat key;
	test01(key);

	return 0;
}
void test01(Animal& animal)
{
	//cout << "sizeof Animal=" << sizeof(Animal) << endl;
	animal.speak();

}