#include <iostream>
#include <cstring>
const int N = 3000;
int a[N];
using namespace std;
int main()
{
	string str;
	cin >> str;
	int n = str.length();
	int j = 0;
	int ans = 0;
	for(int i = 0; i < n; i++)
	{
		while(j < n && a[int(str[i])])a[int(str[j])]--, j++;
		a[int(str[i])] = 1;
		cout << i << " " << j << endl;
		ans = max(ans, i - j + 1);
	}
	cout << ans;
}
