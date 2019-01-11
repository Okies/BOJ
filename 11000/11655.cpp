#include <iostream>
#include <string>

using namespace std;

string str;

void transfer(string &s)
{
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			if (s[i] < 'a' + 13)
				s[i] += 13;
			else
				s[i] -= 13;

		if (s[i] >= 'A' && s[i] <= 'Z')
			if (s[i] < 'A' + 13)
				s[i] += 13;
			else
				s[i] -= 13;
	}
}

int main(void)
{
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
#endif // _DEBUG
	getline(cin, str);

	transfer(str);

	cout << str << endl;

	return 0;
}