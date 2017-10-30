#include <iostream>

using namespace std;

int map[101][101];
int n;
int l;
int line[101];

int check(int line[])
{
	int flag = 0;
	int cnt = 1;

	for (int i = 0; i < n - 1; i++)
	{
		if (abs(line[i] - line[i + 1]) > 1)
			return 0;
		else if (line[i] == line[i + 1])
			cnt++;
		else if (line[i] - line[i + 1] == -1)
		{
			if (flag && cnt < 2 * l)
				return 0;
			else if (cnt < l)
				return 0;
			else
			{
				cnt = 1;
				flag = 0;
			}
		}
		else
		{
			if (flag && cnt < l)
				return 0;
			else
			{
				cnt = 1;
				flag = 1;
			}
		}
	}

	if(flag && cnt < l)
		return 0;

	return 1;
}

int main(void)
{
	//freopen("input.txt", "r", stdin);

	cin >> n >> l;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> map[i][j];

	int cnt = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			line[j] = map[i][j];
		if (check(line))
			cnt++;
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			line[j] = map[j][i];
		if (check(line))
			cnt++;
	}

	cout << cnt;

	return 0;
}