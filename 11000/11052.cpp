//���������� �ؾ ��縦 �ϰ� �ִ� �غ��̴� ���� �ؾ�� N�� ���Ҵ�.
//
//�غ��̴� ������ �ؾ ��Ʈ �޴��� �����ؼ� �ؾ�� �ȾƼ� ���� �� �ִ� ������ �ִ�� ������� �Ѵ�.
//�ؾ ��Ʈ �޴��� �ؾ�� ��� �Ĵ� ���� �ǹ��ϰ�, ��Ʈ �޴��� ������ �̹� ������ �ִ�.
//
//�ؾ i���� �̷���� ��Ʈ �޴��� ������ Pi ���̴�.
//
//�ؾ�� 4�� ���� �ְ�, 1�� �� ���� ������ 1, 2���� 5, 3���� 6, 4���� 7�� ��쿡 �غ��̰� ���� �� �ִ� �ִ� ������ 10���̴�. 
//2��, 2���� �ؾ�� �ȸ� �Ǳ� �����̴�.
//
//1�� �� ���� ������ 5, 2���� 2, 3���� 8, 4���� 10 �� ��쿡�� 20�� �ȴ�. 1��, 1��, 1��, 1���� �ؾ�� �ȸ� �Ǳ� �����̴�.
//
//����������, 1�� �� ���� ������ 3, 2���� 5, 3���� 15, 4���� 16�� ��쿡�� ������ 18�̴�.�ؾ�� 3��, 1���� �ȸ� �Ǳ� �����̴�.
//
//��Ʈ �޴��� ������ �־����� ��, �غ��̰� ���� �� �ִ� �ִ� ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

#include <iostream>

using namespace std;

int main(void)
{
	int n;
	int arr[1001], dp[1001] = {0};
	cin >> n;

	arr[0] = 0;
	for (int i = 1; i <= n; i++)
		cin >> arr[i];

	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			int num = arr[j] + arr[i - j];
			if (num > dp[i])
				dp[i] = num;
		}
		arr[i] = dp[i];
	}

	cout << dp[n] << endl;

	return 0;
}