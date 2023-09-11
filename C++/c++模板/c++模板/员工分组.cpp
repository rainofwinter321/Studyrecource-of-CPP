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
		p.m_name = "员工";
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
/*分组显示*/
void showworker(multimap<int, person>Map)
{
	/*key 是 1~3，分别为美术，策划，营销*/
	for (int i= 1; i != 4; i++)
	{
		multimap<int, person>::iterator beg, end,m;
		beg = Map.lower_bound(i);/*也可以使用lower_bound 和 upper_bound函数，获得某个键对应的所有元素的首尾迭代器*/
		end = Map.upper_bound(i);
		//auto pos = Map.find(i);
		//int m_count = Map.count(i);
		switch (i)
		{
		case 1:
			cout << "美术部门" << endl;
			break;
		case 2:
			cout << "策划部门" << endl;
			break;
		case 3:
			cout << "研发部门" << endl;
		default:
			break;
		}

		for (m=beg;m!=end;m++)
		{
			cout << "员工名称:" << m->second.m_name<< "  员工薪资:" << m->second.m_salary << endl;
			
		}
	}
}
void test()
{
	vector<person>worker;
	creatworker(worker);
	/*员工分组*/
	multimap<int, person>Map;
	setgroup(worker, Map);
	/*分组显示*/
	showworker(Map);
}

int main()
{
	test();
	return 0;
}

/*总结 ：锻炼了map关联容器相关接口的操作，学会如何遍历某一键对应的所有元素 */