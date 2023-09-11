#include<iostream>
#include<string>
using namespace std;

class Person
{
public:
	/*�������з��������͵�ַ�Ĳ����������Ƿ�Ӧ����const�ģ�
	Ҫʹ��const����Ϊ��Щ���������ı������õĶ�������ݡ�
	const �������� ��this ��Ϊһ������ָ�룬����ͨ��this�ı亯���е����ݣ���Ϊ����һ��ֻ�����õĺ���*/
	string getname()const { return m_Name; }
	string getaddress()const { return m_Address; }

	string m_Name;
	string m_Address;
};

istream& read(istream& is, Person& item)
{
	
	is >> item.m_Name>> item.m_Address;
	
	return is;
}
ostream& print(ostream& os, const Person& item)
{
	os << item.m_Name << " " << item.m_Address << endl;
	return os;
}

void test()
{
	Person p;
	if (read(cin, p))
	{
		print(cout, p);
	}
}

int main()
{
	test();


	return 0;
}