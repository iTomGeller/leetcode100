#include <iostream>
using namespace std;
const int N = 300;
int a[N][N], n;
int main()
{
	cin >> n;
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= n; j++)
	 		cin >> a[i][j];
	int move_times = n - 1;
	int T = 1, B = n, L = 1, R = n;
	for(int times = 1; times <= (n + 1) / 2; times++){
		for(int move = 0; move < move_times; move++){
			swap(a[T][L + move], a[T + move][R]);
			swap(a[T][L + move], a[B - move][L]);
			swap(a[B - move][L], a[B][R - move]); 
		}
		move_times -= 2;
		T++;
		B--;
		L++;
		R--;
	}
		for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++)
		cout << a[i][j] << " ";
		cout << endl;}
}
