#include <iostream>
#include <cstring>
using namespace std;
const int N = 128;
int counta[N], countb[N];
int ans = 3e6;
int startpos = 0;
string s, t; 
int check()
{
	for(int i = 0; i < N; i++)
	if(counta[i] < countb[i])return 0;
	return 1;
}
int main()
{
	cin >> s >> t;
	int n = s.length(), m = t.length();
	for(int i = 0; i < m; i++)countb[int(t[i])]++;
	if(n < m){cout << "";return 0;}
	for(int i = 0; i < m; i++)
	counta[int(s[i])]++;
	for(int j = m - 1, i = 0; j < n; j++)
	{
		if(j != m - 1)
		counta[int(s[j])]++;
		while(check() && i <= j)
		{
		if(j - i + 1 <= ans)ans = j - i + 1, startpos = i;
		counta[int(s[i])]--;
		i++;
		}
	}
	if(ans == 3e6)cout << "";
	else cout << s.substr(startpos, ans);
}
