#include<iostream>
#include<vector>
using namespace std;

void test()
{
	vector<int>arr(5, 1);
	arr.erase(arr.begin(),arr.begin()+3);
	
	cout << "arr��Ԫ��������" << arr.size() << endl;
	cout << "����:" << arr.capacity();


}

int main()
{
	test();

	return 0;
}