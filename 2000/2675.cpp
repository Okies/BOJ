//문자열 S를 입력받은 후에, 각 문자를 R번 반복해 새 문자열 T를 만든 후 출력하는 프로그램을 작성하시오.
//
//다시 설명하자면, 첫 번째 문자를 R번 반복하고, 두 번째 문자를 R번 반복하는 식으로 T를 만들면 된다.
//S에는 QR Code "alphanumeric" 문자만 들어있다.
//
//QR Code "alphanumeric" 문자는 0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ$%*+-. / : 이다.

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