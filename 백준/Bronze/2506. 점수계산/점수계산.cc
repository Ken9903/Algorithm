#include <iostream>

using namespace std;

int main()
{
	int sum = 0;
	int weight = 0;

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		if (temp == 1)
		{
			weight++;
			sum += weight;
		}
		else
		{
			weight = 0;
		}
	}

	cout << sum;
}

