#pragma once
#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Window_mgr
{
public:
	using ScreenIndex = vector<myscreen>::size_type;
	void clear(ScreenIndex);
private:
	vector<myscreen> screens;	// ���ﲻ�ܵ���Screen���캯�������򱨴������˲���ȫ����
};


class myscreen
{
	friend void Window_mgr::clear(ScreenIndex);//���Ա������Ϊ��Ԫ
public:
	using pos = string::size_type;//�ȼ��� typedef string::size_type pos

	myscreen() = default;//ʹ��ϵͳ�ṩ��Ĭ�Ϲ��캯��
	myscreen(pos ht,pos wd) :height(ht),width(wd),contents(ht*wd,' ') {}//��ʼ���б�
	myscreen(pos ht, pos wd, char c) :height(ht), width(wd), contents(ht* wd, c){}//string �����Ĺ��캯�� string c(n,c) n���ַ�c

	myscreen& set(char );
	myscreen& set(pos r ,pos c, char);
	myscreen& move(pos r, pos c);
	myscreen& display(ostream& os);
	const myscreen& display(ostream& os)const;

private:
	pos cursor = 0;//����λ��
	pos height = 0, width = 0;//����
	string contents;//��Ļ�е�����

	void do_display(ostream& os) const { os << contents; }
};
inline myscreen& myscreen:: set( char c)
{
	contents[cursor] = c;
	return *this;
}

inline myscreen& myscreen:: set(pos r, pos c, char ch)
{
	contents[r * width + c] = ch;
	return *this;
}
inline myscreen& myscreen::move(pos r, pos c)
{
	cursor = r * width + c;
	return *this;
}

myscreen& myscreen::display(ostream& os)
{
	do_display(os); return *this;
}

const myscreen& myscreen::display(ostream& os)const
{
	do_display(os);
	return *this;
}

void Window_mgr::clear(ScreenIndex i)
{
	myscreen& s = screens[i];
	s.contents = string(s.height * s.width, ' ');
}