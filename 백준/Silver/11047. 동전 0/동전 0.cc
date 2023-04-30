

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
	string input;
	getline(cin, input);

	istringstream ss(input);

	int n, k;

	ss >> n >> k;

	vector<int> won;
	int count = 0;

	for(int i = 0; i < n; i++)
	{
		int coin;
		cin >> coin;
		won.emplace_back(coin);

	}

	for (int i = n - 1; i >= 0; i--)
	{
		int mul = k / won[i];
		if (mul > 0)
		{
			k -= mul * won[i];
			count += mul;
		}
	}

	cout << count;
	




	



}
