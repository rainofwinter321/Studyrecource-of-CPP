#include<iostream>
#include<string>
using namespace std;
//string ����֪ʶ��
//һcin����string ���ڻ����������ո���з����Ʊ������ֹͣ
//�� getline��ȡһ���У���ȡһ���У��ڼ������ո��tab����ֹͣ��ֱ���������з�
//getline������cinһ����Ҳ�᷵��������������Ҳ����cin�����Կ�����getlineѭ����ȡһ��
//��string������ַ����ַ�������ֵ���ʱ������ȷ��+�ŵ�������������������һ��string��
int main()
{
	string name;
	getline(cin, name);
	
	for (auto& r : name)
	{
		cout << r;
	}
	
	


	return 0;
}