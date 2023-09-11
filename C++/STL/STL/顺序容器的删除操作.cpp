#include<iostream>
#include<vector>
using namespace std;

void test()
{
	vector<int>arr(5, 1);
	arr.erase(arr.begin(),arr.begin()+3);
	
	cout << "arr的元素数量：" << arr.size() << endl;
	cout << "容量:" << arr.capacity();


}

int main()
{
	test();

	return 0;
}