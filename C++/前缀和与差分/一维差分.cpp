#include<iostream>
using namespace std;

const int N = 100010;
int a[N], D[N];

int main()
{
	int n;//����N ,ֱ��������Ϊ��
	while (cin >> n)
	{
		//�������ʼΪ0
		memset(a, 0, sizeof(a)); memset(D, 0, sizeof(D));
		//����n��L��R
		for (int i = 1; i <= n; i++)
		{
			int L, R;
			cin >> L >> R;
			D[L] += 1;
			D[R + 1] -= 1;
		}
		//��ԭ����
		for (int i = 1; i <= n; i++)
		{
			a[i] = a[i - 1] + D[i];
			
			cout << a[i] << " ";
			
			
		}





	}




	return 0;
}