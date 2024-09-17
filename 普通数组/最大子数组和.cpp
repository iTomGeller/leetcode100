#include <iostream>
#include <limits.h>
using namespace std;
const int N =  3e5;
int a[N], s[N];
int n;
int main()
{
	cin >> n;
	for(int i = 1; i <= n; i++) cin >> a[i], s[i] = s[i-1] + a[i];
	int ans = -3e6;
	int minx = 0;
	for(int i = 1; i <= n; i++)
	{
		ans = max(ans, s[i] - minx);
		minx = min(minx, s[i]);
	}
	cout << ans;
 } 
