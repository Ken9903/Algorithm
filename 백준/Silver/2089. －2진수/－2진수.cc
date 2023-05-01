// Project18.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

vector<int> arr;

void binary(long long n)
{
	if (n == 0)
	{
		return;
	}
	if (n > 0) //n이 양수
	{
		long long temp = 1;
		int i = 1;
		while (n > temp)
		{
			temp += pow(4, i);
			i++;
		}
		i--;
		arr.emplace_back(2 * i);
		
		binary(n - pow(4, i));
	}
	else //n이 음수
	{
		long long temp = 0;
		int i = 1;
		while (n < temp)
		{
			temp -= pow(4, i) / 2;
			i++;
			
		}
		i--;
		arr.emplace_back(i * 2 - 1);
		binary(n + (pow(4, i) / 2));
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	long long n;
	cin >> n;

	binary(n);

	long long iter = arr.size();
	arr.emplace_back(0);
	for (long long i = 0; i < iter; i++)
	{
		cout << 1;
		long long temp = arr[i] - arr[i + 1] - 1;
		for (long long j = 0; j < temp; j++)
		{
			cout << 0;
		}
	}

	if (n % 2 == 0)
	{
		cout << 0;
	}
}

