//
//�׷� �ܾ�� �ܾ �����ϴ� ��� ���ڿ� ���ؼ�, �� ���ڰ� �����ؼ� ��Ÿ���� ��츸�� ���Ѵ�.���� ���, 
//ccazzzzbb�� c, a, z, b�� ��� �����ؼ� ��Ÿ����, kin�� k, i, n�� �����ؼ� ��Ÿ���� ������ �׷� �ܾ�������, 
//aabbbccb�� b�� �������� ��Ÿ���� ������ �׷� �ܾ �ƴϴ�.
//
//�ܾ� N���� �Է����� �޾� �׷� �ܾ��� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//

#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	int t;

	cin >> t;
	int cnt = t;

	while (t--)
	{
		string str;
		int alpa[26] = { 0 };

		cin >> str;

		alpa[str[0] - 97] = 1;
		for (int i = 1; i < str.length(); i++)
		{
			if (alpa[str[i] - 97] == 1)
				if (str[i - 1] == str[i])
					continue;
				else
				{
					cnt--;
					break;
				}
			else
				alpa[str[i] - 97] = 1;
		}
	}

	cout << cnt << endl;

	return 0;
}