#include <iostream>

using namespace std;

long long int arr[102][10];
int n;
long long int sum;
long long int mod = 1000000000;

long long int dp(int n, int m)
{
	if (n == 1 || arr[n][m])
		return arr[n][m];

	if (m == 0)
		arr[n][m] = dp(n - 1, m + 1);
	else if (m == 9)
		arr[n][m] = dp(n - 1, m - 1);
	else
		arr[n][m] = (dp(n - 1, m - 1) + dp(n - 1, m + 1)) % mod;

	return arr[n][m];
}

int main(void)
{
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
#endif // _DEBUG

	cin >> n;

	for (int i = 1; i < 10; i++)
		arr[1][i] = 1;

	for(int i = 0; i < 10; i++)
		sum += dp(n, i) % mod;

	cout << sum % mod;

	return 0;
}