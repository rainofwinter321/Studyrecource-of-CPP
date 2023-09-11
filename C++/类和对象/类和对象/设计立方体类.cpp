#include<iostream>
#include<string>
using namespace std;
//设计立方体类
class cue {
	//行为，计算cue的面积和体积,设置和获取长宽高
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
	//利用成员函数判断两个立方体是否相同
	bool isSame(cue c)
	{
		if (S() == c.S() && V() == c.V())
		{
			return true;
		}
		else
			return false;
	}
	//属性
private:
	double m_H;
	double m_L;
	double m_W;
};

bool cmp(cue &c1,cue &c2);//bool 类型判断真假

int main()
{
	cue c1, c2;


	return 0;
}
//利用全局函数判断
bool cmp(cue &c1,cue &c2)//引用节省空间
{
	if (c1.S() == c2.S() && c1.V() == c2.V())
	{
		return true;
	}
	else
		return false;

}