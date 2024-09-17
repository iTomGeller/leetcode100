#include <iostream>
#include <vector>
using namespace std;
const int N = 3e5;
int a[N], n;
int l[N], r[N];
int main()
{
	cin >> n;
	for(int i = 1; i <= n; i++) cin >> a[i];
	int hh = 0, tt = 0;
	int q[N] = {0}; 
	int ans = 0;
	for(int i = 1; i <= n; i++)
	{
		while(hh < tt && a[i] >= q[tt])tt--;
		q[++tt] = a[i];
		l[i] = q[hh + 1];
	}
	hh = tt = 0;
	q[0] = 0;
		for(int i = n; i >= 1; i--)
	{
		while(hh < tt && a[i] >= q[tt])tt--;
		q[++tt] = a[i];
		ans += max(min(q[hh + 1], l[i]) - a[i], 0);
	}
	cout << ans;
}
