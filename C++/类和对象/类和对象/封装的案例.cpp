#include<iostream>
#include<string>
using namespace std;
//����һ��ѧ���࣬������������ѧ�ţ���Ϊ����ʾ������ѧ��,����Ϊ�и�ֵ
class Student {
	//����Ȩ��
public:
	//����
	string Name;
	int Id;
	//��Ϊ
	void _Set(string name,int id)
	{
		Name = name;
		Id = id;

	}
	void _Showstudent()
	{
		cout << "������" << Name << " " << "ѧ�ţ�" << Id << endl;
	}

};
int main()
{
	//����һ�������ѧ��
	Student s1;
	//��ֵ
	s1._Set("����", 1);
	//��ʾѧ��������ѧ��
	s1._Showstudent();

	return 0;
}