#include <iostream>
#include <string>
#include <sstream>

using namespace std;



int arr[1001];

int calculate(int n)
{
	int temp;
	if (n == 1)
	{
		return arr[1];
	}
	else if (n == 2)
	{	
		return arr[2];
	}

	if (n % 2 == 0)
	{
		if (arr[n - 2] != -1)
		{
			return (arr[n - 2] * 4) - 1;
		}
		else
		{
			temp = (calculate(n - 2) * 4) - 1;
			if (temp >= 10007)
			{
				temp = temp % 10007;
			}
			arr[n - 2] = temp;
			return (temp);
		}
	}
	else
	{
		if (arr[n - 2] != -1)
		{
			return (arr[n - 2] * 4) + 1;
		}
		else
		{
			temp = (calculate(n - 2) * 4) + 1;
			if (temp >= 10007)
			{
				temp = temp % 10007;
			}
			arr[n - 2] = temp;
			return (temp);
		}
	}

}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);		//입출력 시간에 많은 도움을 줌.

	int num;

	cin >> num;

	fill_n(arr, 1001, -1);
	arr[1] = 1;
	arr[2] = 3;

	cout << calculate(num);


	
}