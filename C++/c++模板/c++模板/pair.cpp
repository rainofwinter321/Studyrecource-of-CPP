#include<iostream>

using namespace std;
/*template <class T1, class T2> struct pair;*/
int main()
{
	
	pair<int, int> q;
	q = make_pair(10, 20);
	cout << q.first << endl << q.second << endl;


	return 0;
}