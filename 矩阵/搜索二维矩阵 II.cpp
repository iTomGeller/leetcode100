#include <iostream>
using namespace std;
const int N = 305;
int a[N][N], n, m;
int main()
{
	cin >> n >> m;
	int target;
	cin >> target;
	for(int i = 1; i <= n; i++)
	for(int j = 1; j <= m; j++)
		cin >> a[i][j];
	int r = n , c = 1;
	while(r >= 1 && c <= m)
	{
		if(a[r][c] == target){
		puts("True");return 0;}
		if(a[r][c] > target)r--;
		if(a[r][c] < target)c++;
	 } 
	 puts("False");
}
