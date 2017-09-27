#include <iostream>
#include <queue>

using namespace std;

int map[1001][1001];
int mark[1001][1001];
queue<pair<int, int>> q;

int bfs(int row, int col)
{
	int max = -1;

	while (true)
	{
		if (q.size() == 0)
			break;

		pair<int, int> p = q.front();
		int now = mark[p.first][p.second];
		
		if (now > max)
			max = now;

		if (p.first > 0 && map[p.first-1][p.second] != -1 && !mark[p.first-1][p.second])
		{
			q.push(make_pair(p.first - 1, p.second));
			mark[p.first - 1][p.second] = now + 1;
		}
		if (p.second > 0 && map[p.first][p.second - 1] != -1 && !mark[p.first][p.second - 1])
		{
			q.push(make_pair(p.first, p.second - 1));
			mark[p.first][p.second - 1] = now + 1;
		}
		if (p.first < row - 1 && map[p.first + 1][p.second] != -1 && !mark[p.first+1][p.second])
		{
			q.push(make_pair(p.first + 1, p.second));
			mark[p.first + 1][p.second] = now + 1;
		}
		if (p.second < col - 1 && map[p.first][p.second + 1] != -1 && !mark[p.first][p.second + 1])
		{
			q.push(make_pair(p.first, p.second + 1));
			mark[p.first][p.second + 1] = now + 1;
		}

		q.pop();
	}

	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			if (mark[i][j] == 0 && map[i][j] != -1)
				return 0;

	return max;
}

int main(void)
{
	int row, col;

	cin >> col >> row;

	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
		{
			cin >> map[i][j];

			if (map[i][j] == 1)
			{
				q.push(make_pair(i, j));
				mark[i][j] = 1;
			}
		}

	if (q.size() == 0)
		cout << -1;
	else
		cout << bfs(row, col) - 1;

	return 0;
}