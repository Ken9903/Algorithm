// Project16.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

long long arr[1001][10];

int stair(int num, int colum)
{
	if (num == 1)
	{
		return 1;
	}
	else
	{
		long long sum = 0;
		for (int i = colum; i < 10; i++)
		{
			if (arr[num - 1][i] == -1)
			{
				sum += stair(num - 1, i);
			}
			else
			{
				sum += arr[num - 1][i];
			}
		}
		arr[num][colum] = sum % 10007;
		return sum % 10007;
	}
	
}

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < 1001; i++)
	{
		for (int z = 0; z < 10; z++)
		{
			arr[i][z] = -1;
		}
	}


	//int temp = 10;
	for (int i = 0; i < 10; i++)
	{
		arr[1][i] = 1;
	}
	
	int sum = 0;
	for (int i = 0; i < 10; i++)
	{
		sum += stair(n, i);
	}

	cout << sum % 10007;


}

