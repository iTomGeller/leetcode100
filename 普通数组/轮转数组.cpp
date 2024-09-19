#include <iostream>
#include <algorithm> 
using namespace std;
const int N = 3e5;
int a[N], n, k;
int main()
{
	cin >> n >> k;
	for(int i = 1; i <= n; i++)cin >> a[i];
	k %= n;
	reverse(a + 1, a + 1 + n);
	reverse(a + 1, a + k + 1);
	reverse(a + k + 1, a + 1 + n);
	for(int i = 1; i <= n; i++) cout << a[i] << " ";
 } 
