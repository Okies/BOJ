//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int n;
//int bd[21][21];
//int MIN = 1000000;
//
//void dfs(int l, vector<int> ta, vector<int> tb)
//{
//	if (ta.size() > n / 2 || tb.size() > n / 2)
//		return;
//
//	if (l == n)
//	{
//		int sumA = 0;
//		for (int i = 0; i < ta.size(); i++)
//			for(int j = 0; j < ta.size(); j++)
//				sumA += bd[ta[i]][ta[j]];
//
//		int sumB = 0;
//		for (int i = 0; i < tb.size(); i++)
//			for (int j = 0; j < tb.size(); j++)
//				sumB += bd[tb[i]][tb[j]];
//		
//		int m = abs(sumA - sumB);
//		if (MIN > m) MIN = m;
//
//		return;
//	}
//
//	ta.push_back(l);
//	dfs(l + 1, ta, tb);
//	ta.pop_back();
//
//	tb.push_back(l);
//	dfs(l + 1, ta, tb);
//}
//
//int main(void)
//{
//	//freopen("input.txt", "r", stdin);
//	cin >> n;
//
//	for (int i = 0; i < n; i++)
//		for (int j = 0; j < n; j++)
//			cin >> bd[i][j];
//
//	int visited[21];
//	for (int i = 0; i < n; i++)
//		visited[i] = 0;
//
//	vector<int> ta, tb;
//
//	dfs(0, ta, tb);
//
//	cout << MIN;
//
//	return 0;
//}