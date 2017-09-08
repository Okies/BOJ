//N��Nũ���� ��ķ� ǥ���Ǵ� ���̰� �ִ�. ������ �� ĭ���� -1, 0, 1�� �� �� �� �ϳ��� ����Ǿ� �ִ�.
//	�츮�� �� ����� ������ ũ��� �ڸ����� �ϴµ�, �� �� ������ ��Ģ�� ���� �ڸ����� �Ѵ�.
//
//���� ���̰� ��� ���� ���� �Ǿ� �ִٸ� �� ���̸� �״�� ����Ѵ�.
//(1)�� �ƴ� ��쿡�� ���̸� ���� ũ���� 9���� ���̷� �ڸ���, ������ �߸� ���̿� ���ؼ� (1)�� ������ �ݺ��Ѵ�.
//�̿� ���� ���̸� �߶��� ��, -1�θ� ä���� ������ ����, 0���θ� ä���� ������ ����,
//1�θ� ä���� ������ ������ ���س��� ���α׷��� �ۼ��Ͻÿ�.

#include <iostream>

using namespace std;

int board[2200][2200];
int num[3];
int N;

void check(int x, int y, int n)
{
	int tocheck = board[x][y];

	if(n == 1)
	{
		num[tocheck+1]++;
		return ;
	}

	for(int i = x; i < x + n; i++)
		for(int j = y; j < y + n; j++)
			if(board[i][j] != tocheck)
			{
				for(int a = x; a < x + n; a += n/3)
					for(int b = y; b < y + n; b += n/3)
						check(a, b, n/3);
				return ;
			}

	num[tocheck+1]++;
}

int main(void)
{
	cin >> N;

	for(int i = 1; i <= N; i++)
		for(int j = 1; j <= N; j++)
			cin >> board[i][j];

	check(1, 1, N);

	for(int i = 0; i < 3; i++)
		cout << num[i] << endl;

	return 0;
}