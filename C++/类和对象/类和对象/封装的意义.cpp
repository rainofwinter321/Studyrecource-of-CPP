#include<iostream>
#include<string>
using namespace std;

const double PI = 3.14;
//�������һ��Բ�࣬��Բ���ܳ����뾶r��Բ������
class circle {
	//����Ȩ�ޣ�����Ȩ��
public:
	//����
	double r;
	//��Ϊ���������ܳ�����һ��������ʵ��
	double zhouchang()
	{
		return 2 * PI * r;
	}
};

int main()
{
	//ͨ��Բ�࣬����һ�������Բ
	//ʵ������ͨ���࣬����һ������Ķ���
	circle c1;
	//�����Ը�ֵ
	c1.r = 10;
	//������Բ���ܳ�
	cout << "Բ���ܳ��ǣ�" << c1.zhouchang() << endl;

	return 0;
}