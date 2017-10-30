//#include <iostream>
//
//using namespace std;
//
//int n;
//int arr[12];
//int A, M, T, D;
//int MAX = -1000000000;
//int MIN = 1000000000;
//
//void dfs(int i, int sum, int a, int m, int t, int d)
//{
//	if (i == n)
//	{
//		if (sum > MAX) MAX = sum;
//		if (sum < MIN) MIN = sum;
//		return;
//	}
//
//	if (a < A)
//		dfs(i + 1, sum + arr[i], a + 1, m, t, d);
//	if (m < M)
//		dfs(i + 1, sum - arr[i], a, m + 1, t, d);
//	if (t < T)
//		dfs(i + 1, sum * arr[i], a, m, t + 1, d);
//	if (d < D)
//		dfs(i + 1, sum / arr[i], a, m, t, d + 1);
//}
//
//int main(void)
//{
//	cin >> n;
//	for (int i = 0; i < n; i++)
//		cin >> arr[i];
//	cin >> A >> M >> T >> D;
//
//	dfs(1, arr[0], 0, 0, 0, 0);
//	cout << MAX << endl << MIN;
//
//	return 0;
//}