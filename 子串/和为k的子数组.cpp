#include <iostream>
#include <unordered_map>
using namespace std;
const int N = 3e5;
int a[N], s[N];
unordered_map<int, int>count;
int main()
{
	int n, k;
	cin >> n >> k;
	int ans = 0;
	for(int i = 1; i <= n; i++) cin >> a[i], s[i] = s[i-1] + a[i];
	for(int i = 1, j = 0; i <= n; i++, j++)
	{
		count[s[j]]++;
		ans += count[s[i] - k];
	} 
	cout << ans;
}
