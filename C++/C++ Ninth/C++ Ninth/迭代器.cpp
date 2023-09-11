#include<iostream>
#include<vector>
using namespace std;
bool find()
{
	vector<int> arr = { 1,2,3,4,5,6,7 };
	int n;
	cin >> n;
	auto it = arr.begin();
	auto im = arr.end();

	while (it != im)
	{
		if (*it == n)
		{
			return true;
		}
		++it;
	}
	return false;
}
int main()
{
	if (find())
	{
		cout << "ÕÒµ½" << endl;
	}
	else
	{
		cout << "Ã»ÕÒµ½" << endl;
	}

	return 0;
}