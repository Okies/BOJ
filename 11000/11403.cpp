#include <iostream>
#include <queue>

using namespace std;

int map[101][101];
int mark[101][101];

int main(void)
{
	int n;

	cin >> n;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> map[i][j];

	queue<pair<int, int>> q;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			if (map[i][j])
			{
				q.push(make_pair(i, j));
				mark[i][j] = 1;
			}

		while (true)
		{
			if (!q.size())
				break;

			pair<int, int> p = q.front();
			q.pop();

			for(int j = 0; j < n; j++)
				if (map[p.second][j] && !mark[i][j])
				{
					q.push(make_pair(i, j));
					mark[i][j] = 1;
				}
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << mark[i][j] << " ";
		cout << endl;
	}

	return 0;
}