#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int t;
string s;
vector<char> l, r;

int main(void)
{
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
#endif // _DEBUG

	getline(cin, s);
	for (auto c : s)
	{
		l.push_back(c);
	}

	cin >> t;

	while (t--)
	{
		char cmd;

		cin >> cmd;

		if (cmd == 'L' && !l.empty())
		{
			r.push_back(l.back());
			l.pop_back();
		}
		else if (cmd == 'D' && !r.empty())
		{
			l.push_back(r.back());
			r.pop_back();
		}
		else if (cmd == 'B' && !l.empty())
		{
			l.pop_back();
		}
		else if (cmd == 'P')
		{
			char c;

			cin >> c;

			l.push_back(c);
		}
	}

	for (auto c : l)
		cout << c;
	reverse(r.begin(), r.end());
	for (auto c : r)
		cout << c;

	return 0;
}