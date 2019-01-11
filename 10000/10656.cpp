#include <iostream>
#include <vector>

using namespace std;

char map[52][52];
int n, m;
vector<pair<int, int>> v;

int check(int y, int x)
{
	if (map[y][x] != '.')
		return 0;

	//가로
	if (x == 0 || map[y][x - 1] != '.')
	{
		int length = 0;
		for (int j = 0; j < m; j++)
			if (map[y][x + j] == '.')
				length++;
			else
				break;

		if (length >= 3)
			return 1;
	}

	//세로
	if (y == 0 || map[y - 1][x] != '.')
	{
		int length = 0;
		for (int i = 0; i < n; i++)
			if (map[y + i][x] == '.')
				length++;
			else
				break;

		if (length >= 3)
			return 1;
	}

	return 0;
}

void solve()
{
	for(int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (check(i, j))
				v.push_back(make_pair(i + 1, j + 1));
}

int main(void)
{
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
#endif // !_DEBUG

	cin >> n >> m;

	for(int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> map[i][j];

	solve();

	cout << v.size() << endl;
	for(pair<int, int> p : v)
	{
		cout << p.first << " " << p.second << endl;
	}

	return 0;
}