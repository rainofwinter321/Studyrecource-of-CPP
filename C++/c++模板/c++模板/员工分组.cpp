#include<map>
#include<string>
#include<iostream>
#include<vector>
using namespace std;

class person
{
public:


	string m_name;
	int m_salary;
};

void creatworker(vector<person>& v)
{
	person p;
	string seed_name = "ABCDEFGHIJ";
	for (int i = 0; i != 10; i++)
	{
		p.m_name = "Ա��";
		p.m_name += seed_name[i];
		p.m_salary = rand() % 5000 + 5000;
		v.push_back(p);
	}
}
void setgroup(vector<person>& v, multimap<int, person>& Map)
{
	for (auto it = v.begin(); it != v.end(); ++it)
	{
		pair<int, person>p;
		p = make_pair(rand() % 3 + 1, *it);
		Map.insert(p);
	}
}
/*������ʾ*/
void showworker(multimap<int, person>Map)
{
	/*key �� 1~3���ֱ�Ϊ�������߻���Ӫ��*/
	for (int i= 1; i != 4; i++)
	{
		multimap<int, person>::iterator beg, end,m;
		beg = Map.lower_bound(i);/*Ҳ����ʹ��lower_bound �� upper_bound���������ĳ������Ӧ������Ԫ�ص���β������*/
		end = Map.upper_bound(i);
		//auto pos = Map.find(i);
		//int m_count = Map.count(i);
		switch (i)
		{
		case 1:
			cout << "��������" << endl;
			break;
		case 2:
			cout << "�߻�����" << endl;
			break;
		case 3:
			cout << "�з�����" << endl;
		default:
			break;
		}

		for (m=beg;m!=end;m++)
		{
			cout << "Ա������:" << m->second.m_name<< "  Ա��н��:" << m->second.m_salary << endl;
			
		}
	}
}
void test()
{
	vector<person>worker;
	creatworker(worker);
	/*Ա������*/
	multimap<int, person>Map;
	setgroup(worker, Map);
	/*������ʾ*/
	showworker(Map);
}

int main()
{
	test();
	return 0;
}

/*�ܽ� ��������map����������ؽӿڵĲ�����ѧ����α���ĳһ����Ӧ������Ԫ�� */