//#include <iostream>
//#include <string>
//
//using namespace std;
//
//string wheel[4];
//
//void rotate(int f, int n, int d)
//{
//	if (f == 0)
//	{
//		if (n < 3 && wheel[n][2] != wheel[n + 1][6])
//		{
//			rotate(1, n + 1, d*-1);
//		}
//		if (n > 0 && wheel[n][6] != wheel[n - 1][2])
//		{
//			rotate(-1, n - 1, d*-1);
//		}
//	}
//	else if(f == 1)
//	{
//		if (n < 3 && wheel[n][2] != wheel[n + 1][6])
//			rotate(1, n + 1, d*-1);
//	}
//	else
//	{
//		if (n > 0 && wheel[n][6] != wheel[n - 1][2])
//			rotate(-1, n - 1, d*-1);
//	}
//
//	if (d == 1)
//	{
//		wheel[n] = wheel[n][7] + wheel[n].substr(0, 7);
//	}
//	else
//	{
//		wheel[n] = wheel[n].substr(1, 7) + wheel[n][0];
//	}
//}
//
//int main(void)
//{
//	//freopen("input.txt", "r", stdin);
//
//	for (int i = 0; i < 4; i++)
//		cin >> wheel[i];
//
//	int t;
//
//	cin >> t;
//
//	while (t--)
//	{
//		int n, d;
//
//		cin >> n >> d;
//
//		rotate(0, n-1, d);
//	}
//
//	int sum = 0;
//	for (int i = 0, p = 1; i < 4; i++, p *= 2)
//		if (wheel[i][0] == '1')
//			sum += p;
//
//	cout << sum;
//
//	return 0;
//}