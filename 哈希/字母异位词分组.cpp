#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
const int N = 100;
//hash可能为负 所以得用unordered_map 
int main()
{
	int n;
	cin >> n;
//	vector<string>str;
	vector<string>group[N];
	unordered_map<string, int>mp;
	int tot = 0;
    for(int i = 1; i <= n; i++)
	{
		string tmp;
		cin >> tmp;
		string tmp_2 = tmp;
		sort(tmp.begin(), tmp.end());
		if(mp.find(tmp) != mp.end())
		{
			auto id = mp.find(tmp)->second;
			group[id].push_back(tmp_2);
		}
		else
		{
			mp[tmp] = tot;
			group[tot].push_back(tmp_2);
			tot++;
		}
	}
	cout << tot << endl;
	 for(int i = 0; i < tot; i++)
	 {
	 	for(auto t:group[i])
	 	cout << t << ", ";
	 	cout << endl;
	 }
 } 
