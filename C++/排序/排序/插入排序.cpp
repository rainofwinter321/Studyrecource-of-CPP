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
/*插入排序：
在一堆无序序列中，从第二个元素开始，向之前的元素比较。以升序为例，如果没有到达第一个并且前一个元素大于后一个元素，
把前一个元素向后挪一位。用tmp记录要插入的元素，循环结束后，插入到当前位置。*/