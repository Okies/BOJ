//���л� ��������� 90 % �� �ڽ��� �ݿ��� ����� �Ѵ´ٰ� �����Ѵ�.����� �׵鿡�� ���� ������ �˷���� �Ѵ�.

#include <iostream>
#include <stdio.h>

using namespace std;

int main(void)
{
	int t;

	cin >> t;

	while (t--)
	{
		int n;

		cin >> n;

		int *arr = new int[n];
		int sum = 0;

		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
			sum += arr[i];
		}

		double avg = sum * 1.0 / n;

		int cnt = 0;

		for (int i = 0; i < n; i++)
			if (arr[i] > avg)
				cnt++;

		printf("%.3f%%\n", cnt * 1.0 / n * 100);
	}

	return 0;
}