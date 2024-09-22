#include <iostream>
using namespace std;
const int N = 300;
typedef pair<int, int>PII;
//上下左右 
PII dir[4] = {{-1,0}, {1,0},
{0,-1}, {0,1}
};
int map[4] = {3, 2, 0, 1};
int a[N][N], n, m;
int vis[N][N];
int main()
{
	cin >> n >> m;
	for(int i = 1; i <= n; i++)
	for(int j = 1; j <= m; j++)cin >> a[i][j];
/*	int x = 1, y = 1;
	int id = 3;
	int count = 0;
	while(count < n*m)
	{
		vis[x][y] = 1;
		cout << a[x][y] << " ";
		int tx = x + dir[id].first, ty = y + dir[id].second; 
		//边界判断
		//关于vis[tx][ty]判断得放后面 不然tx ty越界会出错 
		if(vis[tx][ty] || tx < 1 || tx > n || ty < 1 || ty > m)id = map[id];
		tx = x + dir[id].first, ty = y + dir[id].second;
		x = tx, y = ty;
		count++;
	}*/
	int rbegin = 1, rend = n, cbegin = 1, cend = m;
	while(rbegin <= rend && cbegin <= cend)
	{
		for(int i = cbegin; i <= cend; i++)
		cout << a[rbegin][i] << " ";
		rbegin++;
		for(int i = rbegin; i <= rend; i++)
		cout << a[i][cend] << " ";
		cend--;
		if(rbegin <= rend)
		for(int i = cend; i >= cbegin; i--)
		cout << a[rend][i] << " ";
		rend--;
		if(cbegin <= cend)
		for(int i = rend; i >= rbegin; i--)
		cout << a[i][cbegin] << " ";
		cbegin++;
	}
 } 
