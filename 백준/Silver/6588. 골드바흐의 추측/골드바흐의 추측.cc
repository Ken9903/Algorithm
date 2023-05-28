#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	vector<bool> dicimal;
	for (int i = 0; i <= 1000000; i++)
	{
		dicimal.emplace_back(true);
	}
	dicimal[0] = false;
	dicimal[1] = false;

	for (int i = 2; i <= sqrt(1000000); i++)
	{
		if (dicimal[i] == true)
		{
			int temp = i;
			while (temp + i <= 1000000)
			{
				temp = temp + i;
				dicimal[temp] = false;
			}
		}	
	}


	while (true)
	{
		int n;
		cin >> n;
		if (n == 0)
		{
			break;
		}

		for (int i = 3; i <= n / 2; i += 2)
		{
			if (dicimal[i] == true && dicimal[n - i] == true)
			{
				cout << n << " " << '=' << " " << i << " " << '+' << " " << n - i << '\n';
				break;
			}
		}
	}

	
	return 0;
}

