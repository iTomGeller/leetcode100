#include <iostream>
using namespace std;
const int N = 300;
int a[N][N], r[N], c[N], n, m;
int rflag, cflag; 
int main()
{
	cin >> n >> m;
	for(int i = 1; i <= n; i++)
	for(int j = 1; j <= m; j++)
	{        
	cin >> a[i][j];
	if(i == 1 && !a[i][j]) rflag = 1;
	if(j == 1 && !a[i][j]) cflag = 1;
//	if(!a[i][j])r[i] = 1, c[j] = 1;
	}
	for(int i = 2; i <= n; i++)
	for(int j = 2; j <= m; j++)
		if(!a[i][j])a[i][1] = 0, a[1][j] = 0;
	for(int i = 2; i <= n; i++)
	if(!a[i][1])
	{
		for(int k = 2; k <= m; k++)
		a[i][k] = 0;
	}
		for(int j = 2; j <= m; j++)
	if(!a[1][j])
	{
		for(int k = 2; k <= n; k++)
		a[k][j] = 0;
	}
	if(rflag)
	for(int j = 1; j <= m; j++)
	a[1][j] = 0;
	if(cflag)
	for(int i = 1; i <= n; i++)
	a[i][1] = 0;
		for(int i = 1; i <= n; i++){
	for(int j = 1; j <= m; j++)
	cout << a[i][j] << " ";
	cout << endl;}
}
