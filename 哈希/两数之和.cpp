#include <iostream>
#include <cstdio>
#include <unordered_map>
using namespace std;
const int N = 1e6;
int a[N];
unordered_map<int,int> mp;
int main()
{
	int n, target;
	cin >> n;
	for(int i = 1; i <= n; i++)cin >> a[i], mp[a[i]] = i;
	cin >> target;
	for(int i = 0; i <= n; i++) 
	{
		if(mp[target - a[i]])
		{
		cout << i << " " << mp[target - a[i]];	
		break; 
	}
}
}
