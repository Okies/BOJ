//���ڿ� S�� �Է¹��� �Ŀ�, �� ���ڸ� R�� �ݺ��� �� ���ڿ� T�� ���� �� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//
//�ٽ� �������ڸ�, ù ��° ���ڸ� R�� �ݺ��ϰ�, �� ��° ���ڸ� R�� �ݺ��ϴ� ������ T�� ����� �ȴ�.
//S���� QR Code "alphanumeric" ���ڸ� ����ִ�.
//
//QR Code "alphanumeric" ���ڴ� 0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ$%*+-. / : �̴�.

#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	int t;

	cin >> t;

	while (t--)
	{
		int R;
		string S;

		cin >> R >> S;

		for (int i = 0; i < S.length(); i++)
			for (int j = 0; j < R; j++)
				cout << S[i];
		cout << endl;
	}

	return 0;
}