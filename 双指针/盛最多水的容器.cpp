#include <iostream>
using namespace std;
const int N = 1e5 + 5;
int a[N];
int main()
{
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++)cin >> a[i];
	int maxx = -1;
	int ans = 0;
/*	for(int i = 1; i <= n; i++)
	{
		if(a[i] <= maxx)continue;//ÓÅ»¯¼ôÖ¦ 
		for(int j = i + 1; j <= n; j++)
		ans = max(ans, (j - i) * min(a[i], a[j]));
				maxx = max(maxx, a[i]);
	}*/
	int l = 1, r = n;
	while(l < r)
	{
		ans = max(ans,min(a[l], a[r]) * (r - l));
		if(a[r] < a[l])r--;
		else l++;
	}
	cout << ans;
}
