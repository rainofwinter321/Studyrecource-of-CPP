#include<iostream>
using namespace std;
//��̬��ԭ������
//������
class Animal
{
public:
	//�麯��
	virtual void speak()
	{
		cout << "���ｲ��" << endl;
	}
};
class Cat : public Animal
{
public:
	//��д
	virtual void speak()
	{
		cout << "è����" << endl;
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