#include <iostream>
using namespace std;
const int N = 3e5;
int a[N], n;
int main()
{
	cin >> n;
	for(int i = 1; i <= n; i++) cin >> a[i];
	for(int i = 1; i <= n; i++)
	{
		while(a[i] >= 1 && a[i] <= n && a[i] != a[a[i]])
	//	if(a[i] != a[a[i]]) �жϵ÷�while ��Ȼ��ѭ�� 
	//���������n 
		swap(a[i], a[a[i]]);
	}
		for(int i = 1; i <= n; i++)
		if(a[i] != i)
		{
		cout << i;return 0;
		}
		cout << n + 1;
 } 
