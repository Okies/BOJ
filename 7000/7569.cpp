#include <iostream>
#include <queue>

using namespace std;

int map[101][101][101];
int mark[101][101][101];
queue<pair<int, pair<int, int>>> q;

int bfs(int row, int col, int h)
{
	int max = -1;

	while (true)
	{
		if (q.size() == 0)
			break;

		pair<int, pair<int ,int>> p = q.front();
		int now = mark[p.first][p.second.first][p.second.second];
		int x = p.second.second;
		int y = p.second.first;
		int z = p.first;
		
		if (now > max)
			max = now;

		if (z > 0 && map[z - 1][y][x] != -1 && !mark[z - 1][y][x])
		{
			q.push(make_pair(z - 1, make_pair(y, x)));
			mark[z - 1][y][x] = now + 1;
		}
		if (y > 0 && map[z][y - 1][x] != -1 && !mark[z][y - 1][x])
		{
			q.push(make_pair(z, make_pair(y - 1, x)));
			mark[z][y - 1][x] = now + 1;
		}
		if (x > 0 && map[z][y][x - 1] != -1 && !mark[z][y][x - 1])
		{
			q.push(make_pair(z, make_pair(y, x - 1)));
			mark[z][y][x - 1] = now + 1;
		}
		if (z < h - 1 && map[z + 1][y][x] != -1 && !mark[z + 1][y][x])
		{
			q.push(make_pair(z + 1, make_pair(y, x)));
			mark[z + 1][y][x] = now + 1;
		}
		if (y < row - 1 && map[z][y + 1][x] != -1 && !mark[z][y + 1][x])
		{
			q.push(make_pair(z, make_pair(y + 1, x)));
			mark[z][y + 1][x] = now + 1;
		}
		if (x < col - 1 && map[z][y][x + 1] != -1 && !mark[z][y][x + 1])
		{
			q.push(make_pair(z, make_pair(y, x + 1)));
			mark[z][y][x + 1] = now + 1;
		}

		q.pop();
	}

	for(int k = 0; k < h; k++)
		for (int i = 0; i < row; i++)
			for (int j = 0; j < col; j++)
				if (mark[k][i][j] == 0 && map[k][i][j] != -1)
					return 0;

	return max;
}

int main(void)
{
	int row, col, h;

	cin >> col >> row >> h;

	for (int k = 0; k < h; k++)
		for (int i = 0; i < row; i++)
			for (int j = 0; j < col; j++)
			{
				cin >> map[k][i][j];

				if (map[k][i][j] == 1)
				{
					q.push(make_pair(k, make_pair(i, j)));
					mark[k][i][j] = 1;
				}
			}

	if (q.size() == 0)
		cout << -1;
	else if (q.size() == col * row * h)
		cout << 0;
	else
		cout << bfs(row, col, h) - 1;

	return 0;
}