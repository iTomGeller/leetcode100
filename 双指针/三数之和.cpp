#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
const int N = 1e6;
int a[N], n;
struct node{
	int x, y, z;
};
vector<node>ans;
int main(){
	cin >> n;
	for(int i = 1; i <= n; i++)cin >> a[i];
	sort(a + 1, a + 1 + n);
	for(int i = 1; i <= n - 2; i++)
	{
		int l = i + 1, r = n;
		while(l < r)
		{
			int sum = a[i] + a[l] + a[r];
			if(sum == 0)ans.push_back({a[i], a[l], a[r]}),l++,r--;//l r ¶¼Òª±ä 
			if(sum < 0)l++;
			if(sum > 0)r--;
		}
	 }
	 for(auto t: ans)
	 cout << t.x << " " << t.y << " " << t.z << endl; 
}
