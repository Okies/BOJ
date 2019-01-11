#include <iostream>
#include <vector>

using namespace std;

int arr[5002];
vector<int> v;

int n, m;

int main(void)
{
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
#endif // _DEBUG

	cin >> n >> m;

	for (int i = 1; i <= n; i++)
		arr[i] = 1;

	int idx = 0;
	int cnt = 0;
	int cnt2 = 0;

	while (true)
	{	
		if (cnt == n)
			break;

		if (arr[idx] == 1)
			cnt2++;

		if (cnt2 == m)
		{
			cnt++;
			cnt2 = 0;
			v.push_back(idx);
			arr[idx] = 0;
		}

		if (idx == n)
			idx = 0;
		else
			idx++;
	}

	cout << "<";
	for (int i = 0; i < v.size() - 1; i++)
		cout << v[i] << ", ";
	cout << v.back() << ">";

	return 0;
}