#include<iostream>
#include<string>
using namespace std;
//�����������
class cue {
	//��Ϊ������cue����������,���úͻ�ȡ�����
public:
	double V()
	{
		return m_H * m_L * m_W;
	}

	double S()
	{
		return 2 * (m_H * m_L + m_H * m_W + m_L * m_W);
	}
	void setsx(double l, double w, double h)
	{
		m_H = h;
		m_L = l;
		m_W = w;
	}
	double  getl()
	{
		return m_L;
	}
	double  getw()
	{
		return m_W;
	}
	double  geth()
	{
		return m_H;
	}
	//���ó�Ա�����ж������������Ƿ���ͬ
	bool isSame(cue c)
	{
		if (S() == c.S() && V() == c.V())
		{
			return true;
		}
		else
			return false;
	}
	//����
private:
	double m_H;
	double m_L;
	double m_W;
};

bool cmp(cue &c1,cue &c2);//bool �����ж����

int main()
{
	cue c1, c2;


	return 0;
}
//����ȫ�ֺ����ж�
bool cmp(cue &c1,cue &c2)//���ý�ʡ�ռ�
{
	if (c1.S() == c2.S() && c1.V() == c2.V())
	{
		return true;
	}
	else
		return false;

}