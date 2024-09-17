#include <iostream>
#include <cstring>
using namespace std;
const int N = 300;
int count[N];
int check()
{
	for(int i = 0; i < 26; i++)
	if(count[i])return 0;
	return 1;
}
int main()
{
	string s, p;
	cin >> s >> p;
	int n = s.length();
	int len = p.length();
	for(int i = 0; i < len; i++)count[p[i] - 'a']++;
	int flag = 0;
	for(int i = 0; i < n - len + 1; i++)
{
	int j = i + len - 1;
	if(!flag){
		flag = 1;
		for(int k = i; k <= j; k++)count[s[k] - 'a']--;
	}
	else {
		count[s[j] - 'a']--;count[s[i - 1] - 'a']++;
	}
	if(check())cout << i << " ";
}
}
