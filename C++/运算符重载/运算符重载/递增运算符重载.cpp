#include<iostream>
using namespace std;
//�������������
class Myinter {
	friend  ostream& operator<<(ostream& cout, Myinter p);
public:
	Myinter() {
		m_Num = 10;
	}
	//ǰ��++����,��������Ϊ�˶�һ�������в���
	Myinter& operator++()
	{//��++
		m_Num++;
		//�󷵻��������
			return *this;
	}
	//����++
	Myinter operator++(int) {//�������ص�֪ʶ��ͬһ�������£�ͬһ�������������ĸ��������ͣ�˳��ͬ������ֵ��Ӱ�졣
		 //�ȷ��أ���++��//ռλ����int��ֻд���ͣ��������ú���ʱ������д�����Ҳ�С�
		//�ȼ�¼��ʱ���
		Myinter temp = *this;
		m_Num++;
		return  temp;//�ֲ��������ں���ִ������ͷ��ˣ�����������þ��ǷǷ�������������ֵ�൱����һ�ݡ�
		
	}

private:
	int m_Num;
};

void test();
ostream& operator<<(ostream& cout, Myinter p);//cout ����ostream�Ķ��������<<���������������ǵ���ȫ�ֺ���
void test01();


int main()
{
	//test();
	test01();

	return 0;
}
void test() {
	
	Myinter myint;
	cout << ++(++myint);//��Ϊmyint�����Լ��Զ����һ�����ͣ������������ͣ�����Ҫ��<<�������ء�
	cout << myint << endl;
	

}

ostream& operator<<(ostream& cout, Myinter p)//cout ����ostream�Ķ��������<<���������������ǵ���ȫ�ֺ���
{

	cout << "m_Num=" << p.m_Num << endl;
	return cout;
}
void test01()
{
	Myinter myint;
	cout <<(myint++ );//����ֵ
	cout << myint;

}
