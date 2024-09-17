#include <iostream>
using namespace std;
const int N = 1e5;
int a[N];
int main()
{
	int n;
	cin >> n;
	int start = 1;
	for(int i = 1; i <= n; i++)
	cin >> a[i];
	for(int i = 1; i <= n; i++)
		if(a[i])
		{
		if(i != start)
		swap(a[i], a[start]);
		start++;
		} 
   for(int i = 1; i <= n; i++)
   cout << a[i] << " "; 
}
