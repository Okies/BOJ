//2��n ũ���� ���簢���� 1��2, 2��1 Ÿ�Ϸ� ä��� ����� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
//
//�Ʒ� �׸��� 2��5 ũ���� ���簢���� ä�� �� ���� ����� ���̴�.

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