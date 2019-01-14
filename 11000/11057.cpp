#include <iostream>

using namespace std;

int n;
int arr[1002][10];
int sum;

int dp(int n, int m)
{
	if (arr[n][m])
		return arr[n][m];

	for (int i = 0; i <= m; i++)
		arr[n][m] += dp(n - 1, i) % 10007;

	return arr[n][m];
}

int main(void)
{
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
#endif // _DEBUG

	cin >> n;

	for (int i = 0; i < 10; i++)
		arr[1][i] = 1;

	for (int i = 0; i < 10; i++)
		sum += dp(n, i) % 10007;

	cout << sum % 10007;

	return 0;
}