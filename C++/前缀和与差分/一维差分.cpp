#include<iostream>
using namespace std;

const int N = 100010;
int a[N], D[N];

int main()
{
	int n;//输入N ,直到输入流为空
	while (cin >> n)
	{
		//把数组初始为0
		memset(a, 0, sizeof(a)); memset(D, 0, sizeof(D));
		//输入n行L和R
		for (int i = 1; i <= n; i++)
		{
			int L, R;
			cin >> L >> R;
			D[L] += 1;
			D[R + 1] -= 1;
		}
		//求原数组
		for (int i = 1; i <= n; i++)
		{
			a[i] = a[i - 1] + D[i];
			
			cout << a[i] << " ";
			
			
		}





	}




	return 0;
}