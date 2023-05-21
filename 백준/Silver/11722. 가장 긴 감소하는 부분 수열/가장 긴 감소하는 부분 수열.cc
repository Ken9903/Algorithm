#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minusPartial(vector<int> v, int n, vector<int> &check)
{

	if (check[n] != -1)
	{
		return check[n];
	}
	else
	{
		
		int max = 0;
		for (int i = n + 1; i <= v.size() - 1; i++)
		{
			if (v[n] > v[i])
			{
				int temp = minusPartial(v, i, check);
				if (temp > max)
				{
					max = temp;
				}
			}
		}
		check[n] = max + 1;
		return check[n];

	}
	
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	int n;
	cin >> n;

	vector<int> v;
	vector<int> check;
	vector<int> result;
	v.emplace_back(-1);
	check.emplace_back(-1);
	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		v.emplace_back(temp);
		check.emplace_back(-1);
	}
	check[n] = 1;

	int max = 1;
	for (int i = n; i > 0; i--)
	{
		result.emplace_back(minusPartial(v, i, check));
	}
	cout << *max_element(result.begin(), result.end());

	return 0;
}

