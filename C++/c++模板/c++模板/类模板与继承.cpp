#include<iostream>
using namespace std;
//����̳и��ࣨ��ģ�壩����Ҫ����ָ�����ͣ���Ȼϵͳ�޷�����������ڴ档
template<typename T>
class myclass {
public:
	T m;
};

class son :public myclass<int> {
	
};
//��������ָ����������ͣ�����ҲҪ����ģ��
template<typename T1,typename T2>
class Son :public myclass<T2> {
	T1 obj;
};
