#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string s;
vector<string> v;

int main(void)
{
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
#endif // _DEBUG

	cin >> s;

	int l = s.length();
	for (int i = 0; i < l; i++)
		v.push_back(s.substr(i, l - i));

	sort(v.begin(), v.end());

	for (auto s : v)
		cout << s << endl;

	return 0;
}