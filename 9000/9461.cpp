#include <iostream>

using namespace std;

int t;
int n;
long long int arr[101];

long long int dp(int n)
{
	if (arr[n])
		return arr[n];

	arr[n] = dp(n - 1) + dp(n - 5);

	return arr[n];
}

int main(void)
{
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
#endif // _DEBUG

	cin >> t;

	arr[1] = 1;
	arr[2] = 1;
	arr[3] = 1;
	arr[4] = 2;
	arr[5] = 2;


	while (t--)
	{
		cin >> n;

		cout << dp(n) << endl;
	}

	return 0;
}