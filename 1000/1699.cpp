#include <iostream>
#include <math.h>

using namespace std;

int n;
int arr[100001];

int dp(int n)
{
	if (arr[n])
		return arr[n];

	int minn = 100000;
	int sqrtt = sqrt(n);

	for (int i = sqrtt; i > 0; i--)
	{
		int cnt = dp(n - i*i);
		if (minn > cnt)
			minn = cnt;
	}
	arr[n] = minn + 1;

	return arr[n];
}

int main(void)
{
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
#endif // _DEBUG

	cin >> n;

	for (int i = 1; i < sqrt(100000); i++)
		arr[i*i] = 1;

	cout << dp(n);

	return 0;
}