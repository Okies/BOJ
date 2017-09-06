//양수 A가 N의 진짜 약수가 되려면, N이 A의 배수이고, A가 1과 N이 아닐 때이다.
//어떤 수 N의 진짜 약수가 모두 주어질 때, N을 구하는 프로그램을 작성하시오.

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