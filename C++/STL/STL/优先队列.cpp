#include<iostream>
#include<queue>
using namespace std;



	/*优先队列
	priority_queue<T, Container, Compare>
    priority_queue<T>        //直接输入元素则使用默认容器和比较函数*/

	/*标准的队列遵从严格的先进先出，优先队列并不遵从标准的先进先出，
	而是对每一个数据赋予一个权值，根据当前队列权值的状态进行排序，使得权值最大（或最小）的永远排在队列的最前面。*/
	
    struct cmp
    { //这个比较要用结构体表示
        bool operator()(int& a, int& b) const
        {
            return a > b;
        }
    };
    int main()
    {
        priority_queue<int> t;/*使用默认容器和cmp，是从大到小*/
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
