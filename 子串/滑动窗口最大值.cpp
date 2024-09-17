#include <iostream>
using namespace std;
const int N = 3e5;
int a[N], n, k;
int main()
{
	int h = 0, t = 0;
	int q[N];
	cin >> n >> k;
	for(int i = 1; i <= n; i++)cin >> a[i];
	for(int i = 1; i <= n; i++)
	{
		while(h < t && a[i] > a[q[t]])t--;
		q[++t] = i;
		if(i - q[h + 1] + 1 > k)h++;
		if(i >= k)cout << a[q[h + 1]] << " "; 
	}
}
