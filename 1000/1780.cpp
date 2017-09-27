//N×N크기의 행렬로 표현되는 종이가 있다. 종이의 각 칸에는 -1, 0, 1의 세 값 중 하나가 저장되어 있다.
//	우리는 이 행렬을 적절한 크기로 자르려고 하는데, 이 때 다음의 규칙에 따라 자르려고 한다.
//
//만약 종이가 모두 같은 수로 되어 있다면 이 종이를 그대로 사용한다.
//(1)이 아닌 경우에는 종이를 같은 크기의 9개의 종이로 자르고, 각각의 잘린 종이에 대해서 (1)의 과정을 반복한다.
//이와 같이 종이를 잘랐을 때, -1로만 채워진 종이의 개수, 0으로만 채워진 종이의 개수,
//1로만 채워진 종이의 개수를 구해내는 프로그램을 작성하시오.

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