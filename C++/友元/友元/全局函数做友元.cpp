#include<iostream>
#include<string>
using namespace std;

class Buliding {
	friend class Goodfriend;//ͬ��
	//friend void Goodfriend:: visit(); һ��Ҫ�������򣬸�����˭�ĳ�Ա����
	friend void goodgay(Buliding& building);//goodgayȫ�ֺ�����ΪBuliding����Ԫ����������һ������������friend�ؼ���
public:
	/*Buliding()
	{
		m_sroom = "����";
		m_bedroom = "����";
	}*/
	Buliding(); //������������һ��
		
public:
	string m_sroom;
private:
	string m_bedroom;
};
//����д��Ա����������:: +����
Buliding::Buliding() {

	m_sroom = "����";
	m_bedroom = "����";
}
class Goodfriend {
public:
	void visit();//����Buliding������
	Goodfriend();//�����ⶨ�幹�캯�����������������������������������
	Buliding* building;

};
Goodfriend::Goodfriend()
{
	building = new Buliding;

}
void  Goodfriend::visit() {

	cout << "���ѷ��ʣ�" << building->m_bedroom<< endl;
}
//ȫ�ֺ���
void goodgay(Buliding& building)//����˽�����ԣ�
{
	cout << "�û��� ���ʣ�" << building.m_sroom << endl;
	cout << "�û��� ���ʣ�" << building.m_bedroom << endl;
}
int main()
{
	//Buliding p;
	//goodgay(p);
	Goodfriend g;
	g.visit();

	return 0;
}