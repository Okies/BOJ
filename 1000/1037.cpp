//��� A�� N�� ��¥ ����� �Ƿ���, N�� A�� ����̰�, A�� 1�� N�� �ƴ� ���̴�.
//� �� N�� ��¥ ����� ��� �־��� ��, N�� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	int n;

	cin >> n;

	vector<int> arr;

	for (int i = 0; i < n; i++)
	{
		int num;

		cin >> num;

		arr.push_back(num);
	}

	sort(arr.begin(), arr.end());

	cout << arr.front() * arr.back() << endl;

	return 0;
}