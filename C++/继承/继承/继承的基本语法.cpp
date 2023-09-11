#include<iostream>
using namespace std;
//继承，避免重复代码太多。
//以网站页面为例，页面有很多种，但是有一个基本框架是相同的。
class BasePage
{
public:

	//内容
};

//java页面
class Java :public BasePage//继承BasePage
{
	//内容
public:
	void content()//java 独有的特性，共性部分代码不用再写了。
	{
		cout << "Java的学习视频" << endl;
	}

};

