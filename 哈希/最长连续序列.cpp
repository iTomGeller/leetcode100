#include <iostream>
#include <unordered_map>
using namespace std;
const int N = 1e5 + 5;
int a[N];
unordered_map<int, int>h;
int main()
{
	int n;
	cin >> n;
	int ans = 0;
	for(int i = 1; i <= n; i++)cin >> a[i], h[a[i]] = 1;
	for(int i = 1; i <= n; i++)
	{
	if(h.find(a[i] - 1) != h.end())continue;
	int x = a[i];
	int tmp = 0;
	while(h.find(x) != h.end())x++,tmp++;
	ans = max(ans, tmp); 
	}
	cout << ans;
}
