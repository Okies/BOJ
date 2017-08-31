//예전에는 운영체제에서 크로아티아 알파벳을 입력할 수가 없었다.따라서, 다음과 같이 크로아티아 알파벳을 다음과 같이 변경해서 입력했다.
//
//크로아티아 알파벳	변경
//č	c =
//ć	c -
//dž	dz =
//ñ	d -
//lj	lj
//nj	nj
//š	s =
//ž	z =
//예를 들어, ljes = njak은 크로아티아 알파벳 6개(lj, e, š, nj, a, k)로 이루어져 있다.
//
//단어가 주어졌을 때, 몇 개의 크로아티아 알파벳으로 이루어져 있는지 출력한다.

#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string str;

	cin >> str;

	int cnt = str.length();

	for (int i = 1; i < str.length(); i++)
		if (str[i] == 'j')
		{
			if (str[i - 1] == 'l' || str[i - 1] == 'n')
				cnt--;
		}
		else if (str[i] == '-')
		{
			if (str[i - 1] == 'c' || str[i - 1] == 'd')
				cnt--;
		}
		else if (str[i] == '=')
		{
			if (str[i - 1] == 'c' || str[i - 1] == 's' || str[i - 1] == 'z')
			{
				cnt--;
				if (i > 1 && str[i - 2] == 'd')
					cnt--;
			}
		}

	cout << cnt;

	return 0;
}