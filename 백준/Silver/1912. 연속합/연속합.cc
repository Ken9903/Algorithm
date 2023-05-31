#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void continueSum(int n, vector<int> &arr)
{
	if (arr[n + 1] > 0)
	{
		arr[n] = arr[n] + arr[n + 1];
	}
	
}


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	int n;
	cin >> n;

	vector<int> arr;

	for (int i = 0; i < n; i++)
	{
		short input;
		cin >> input;
		arr.emplace_back(input);
	}

	for (int i = n - 2; i >= 0; i--)
	{
		continueSum(i, arr);
	}


	cout << *max_element(arr.begin(),arr.end());
	
	
	return 0;
}

