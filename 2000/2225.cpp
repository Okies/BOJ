#include <iostream>

using namespace std;

long long int arr[201][201];

int n, k;
long long int mod = 1000000000;

long long int dp(int n, int m)
{
	if (arr[n][m])
		return arr[n][m];

	for (int i = 0; i <= n; i++)
		arr[n][m] += dp(i, m - 1) % mod;
	arr[n][m] %= mod;

	return arr[n][m];
}

int main(void)
{
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
#endif // _DEBUG

	cin >> n >> k;

	for (int i = 0; i <= n; i++)
		arr[i][1] = 1;

	cout << dp(n, k);

	return 0;
}