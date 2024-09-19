#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
const int N = 3e5;
int a[N], n;
int ans[N];
int main()
{
	cin >> n;
	for(int i = 1; i <= n; i++)
	cin >> a[i];
	int tmp = 1;
	fill(ans + 1, ans + 1 + n, 1);//memset将每个字节设置为1
	for(int i = 1; i <= n; i++)
	{
		ans[i] *= tmp;
		tmp *= a[i];
	}
	tmp = 1;
	for(int i = n; i >= 1; i--)
	{
			ans[i] *= tmp;
		tmp *= a[i];
	}
	for(int i = 1; i <= n; i++)
	cout << ans[i] << " ";
}
