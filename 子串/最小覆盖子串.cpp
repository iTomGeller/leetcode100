#include <iostream>
#include <cstring>
using namespace std;
const int N = 128;
int count[N];
int ans = 3e6;
int startpos = 0;
string s, t; 
int check()
{
	for(int i = 0; i < t.length(); i++)
	if(count[int(t[i])] > 0)return 0;
	return 1;
}
int main()
{
	cin >> s >> t;
	int n = s.length(), m = t.length();
	for(int i = 0; i < m; i++)count[int(t[i])]++;
	if(n < m){cout << "";return 0;}
	for(int i = 0; i < m; i++)
	count[int(s[i])]--;
	cout << count[int('a')] << endl;
	for(int j = m - 1, i = 0; j < n; j++)
	{
		if(j != m - 1)
		count[int(s[j])]--;
		while(check() && i <= j)
		{
		if(j - i + 1 <= ans)ans = j - i + 1, startpos = i;
		count[int(s[i])]++;
		i++;
		}
	}
	cout << ans;
	if(ans == 3e6)cout << "";
	else cout << s.substr(startpos, ans);
}
