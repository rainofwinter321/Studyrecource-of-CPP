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
	vector<myscreen> screens;	// 这里不能调用Screen构造函数，否则报错引用了不完全类型
};


class myscreen
{
	friend void Window_mgr::clear(ScreenIndex);//令成员函数作为友元
public:
	using pos = string::size_type;//等价于 typedef string::size_type pos

	myscreen() = default;//使用系统提供的默认构造函数
	myscreen(pos ht,pos wd) :height(ht),width(wd),contents(ht*wd,' ') {}//初始化列表
	myscreen(pos ht, pos wd, char c) :height(ht), width(wd), contents(ht* wd, c){}//string 容器的构造函数 string c(n,c) n个字符c

	myscreen& set(char );
	myscreen& set(pos r ,pos c, char);
	myscreen& move(pos r, pos c);
	myscreen& display(ostream& os);
	const myscreen& display(ostream& os)const;

private:
	pos cursor = 0;//光标的位置
	pos height = 0, width = 0;//长宽
	string contents;//屏幕中的内容

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