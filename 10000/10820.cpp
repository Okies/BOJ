//문자열 N개가 주어진다. 이 때, 문자열에 포함되어 있는 소문자, 대문자, 숫자, 공백의 개수를 구하는 프로그램을 작성하시오.
//
//각 문자열은 알파벳 소문자, 대문자, 숫자, 공백으로만 이루어져 있다.

#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string str;

	while(getline(cin, str))
	{
		int U = 0, L = 0, N = 0, S = 0;

		for(int i = 0; i < str.length(); i++)
		{
			if(str[i] >= 'A' && str[i] <= 'Z')
				U++;
			else if(str[i] >= 'a' && str[i] <= 'z')
				L++;
			else if(str[i] >= '0' && str[i] <= '9')
				N++;
			else
				S++;
		}

		cout << L << " " << U << " " << N << " " << S << endl;

		str = "";
	}

	return 0;
}