#include <iostream>
#include <algorithm>

using namespace std;

int t, n;
int arr[2][100000];
int stk[3][100000];

int dp(int n, int m)
{
	if (stk[n][m] >= 0) //초기화된 값과 계산한 값이 0으로 동일한게 구분이 안 됨(dp를 한 의미가 없음) -> 시간초과
		return stk[n][m];

	if (n == 0)
		stk[n][m] = max(dp(1, m - 1), dp(2, m - 1)) + arr[n][m];
	else if (n == 1)
		stk[n][m] = max(dp(0, m - 1), dp(2, m - 1)) + arr[n][m];
	else
		stk[n][m] = max(dp(0, m - 1), dp(1, m - 1));

	return stk[n][m];
}

int main(void)
{
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
#endif // _DEBUG

	cin >> t;

	while (t--)
	{
		cin >> n;

		for (int i = 0; i < 2; i++)
			for (int j = 0; j < n; j++)
				cin >> arr[i][j];

		for (int i = 0; i < 3; i++)
			for (int j = 0; j < n; j++)
				stk[i][j] = -1;

		stk[0][0] = arr[0][0];
		stk[1][0] = arr[1][0];
		stk[2][0] = 0;

		cout << max(max(dp(0, n - 1), dp(1, n - 1)), dp(2, n - 1)) << endl;
	}

	return 0;
}