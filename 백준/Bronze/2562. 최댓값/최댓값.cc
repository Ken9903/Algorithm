#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	vector<short> v;

	for (int i = 0; i < 9; i++)
	{
		int input;
		cin >> input;

		v.emplace_back(input);
	}

	auto iter = max_element(v.begin(), v.end());
	cout << *iter << '\n';
	cout << iter - v.begin() + 1;

	
	return 0;
}

