#include<iostream>
#include<queue>
using namespace std;



	/*���ȶ���
	priority_queue<T, Container, Compare>
    priority_queue<T>        //ֱ������Ԫ����ʹ��Ĭ�������ͱȽϺ���*/

	/*��׼�Ķ�������ϸ���Ƚ��ȳ������ȶ��в�����ӱ�׼���Ƚ��ȳ���
	���Ƕ�ÿһ�����ݸ���һ��Ȩֵ�����ݵ�ǰ����Ȩֵ��״̬��������ʹ��Ȩֵ��󣨻���С������Զ���ڶ��е���ǰ�档*/
	
    struct cmp
    { //����Ƚ�Ҫ�ýṹ���ʾ
        bool operator()(int& a, int& b) const
        {
            return a > b;
        }
    };
    int main()
    {
        priority_queue<int> t;/*ʹ��Ĭ��������cmp���ǴӴ�С*/
        priority_queue<int, vector<int>, cmp>q;
        for (int i = 1; i <= 5; i++)
        {
            q.push(i * 10);
            cout << "push element " << i << endl;
        }
        q.push(15);
        q.push(4);
        int i = 1;
        while (!q.empty())
        {
            int temp = q.top();
            q.pop();
            cout << "No " << i++ << " element is: " << temp << endl;
        }
        return 0;
    }
