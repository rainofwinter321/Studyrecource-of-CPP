#include<iostream>
using namespace std;
void insertionSort(int A[], int n);
int main()
{
	int n = 6;
	int arr[6] = { 34,8,64,51,32,21 };
	insertionSort(arr, n);

	return 0;
}

void insertionSort(int A[], int n)
{
	int j, p;
	int tmp;
	for (p = 1; p < n; p++)
	{
		tmp = A[p];
		for ( j = p; j > 0 && A[j - 1] > tmp; j--)
			A[j] = A[j - 1];
		A[j] = tmp;
	}
}
/*��������
��һ�����������У��ӵڶ���Ԫ�ؿ�ʼ����֮ǰ��Ԫ�رȽϡ�������Ϊ�������û�е����һ������ǰһ��Ԫ�ش��ں�һ��Ԫ�أ�
��ǰһ��Ԫ�����Ųһλ����tmp��¼Ҫ�����Ԫ�أ�ѭ�������󣬲��뵽��ǰλ�á�*/