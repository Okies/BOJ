//���ڿ� N���� �־�����. �� ��, ���ڿ��� ���ԵǾ� �ִ� �ҹ���, �빮��, ����, ������ ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
//
//�� ���ڿ��� ���ĺ� �ҹ���, �빮��, ����, �������θ� �̷���� �ִ�.

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