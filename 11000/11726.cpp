//2×n 크기의 직사각형을 1×2, 2×1 타일로 채우는 방법의 수를 구하는 프로그램을 작성하시오.
//
//아래 그림은 2×5 크기의 직사각형을 채운 한 가지 방법의 예이다.

#include <iostream>
#include <string>

using namespace std;

int fibo(int n)
{
	static int dp[1001];
	
	dp[0] = 1;
	dp[1] = 1;

	if (dp[n] > 0)
		return dp[n];
	dp[n] = fibo(n - 1) + fibo(n - 2);
	return dp[n] % 10007;
}

int main(void)
{
	int n;

	cin >> n;

	cout << fibo(n);

	return 0;
}