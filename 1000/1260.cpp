#include <iostream>
#include <queue>

using namespace std;

int map[1002][1002];
int n, m, v;

int markd[1002];
int markb[1002];

queue<int> q;

void dfs(int v)
{
	cout << v << " ";
	markd[v] = 1;

	for (int i = 1; i <= n; i++)
		if (map[v][i] && !markd[i])
			dfs(i);
}

void bfs(int v)
{
	q.push(v);
	markb[v] = 1;

	while (true)
	{
		if (q.empty())
			break;

		int v = q.front();
		q.pop();

		cout << v << " ";

		for (int i = 1; i <= n; i++)
			if (map[v][i] && !markb[i])
			{
				markb[i] = 1;
				q.push(i);
			}
	}
}

int main(void)
{
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
#endif // _DEBUG

	cin >> n >> m >> v;

	int from, to;

	for (int i = 0; i < m; i++)
	{
		cin >> from >> to;
		map[from][to] = 1;
		map[to][from] = 1;
	}

	dfs(v);

	cout << endl;

	bfs(v);

	return 0;
}