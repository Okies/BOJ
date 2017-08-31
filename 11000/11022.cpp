//두 수 A와 B를 입력받은 다음, A + B를 출력하는 프로그램을 작성하시오.

#include <iostream>

using namespace std;

int main(void)
{
	int t;

	cin >> t;

	for (int i = 0; i < t; i++)
	{
		int a, b;

		cin >> a >> b;

		cout << "Case #" << i + 1 << ": " << a << " + " << b << " = " << a + b << endl;
	}

	return 0;
}