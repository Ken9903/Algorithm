#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	string input;
	getline(cin, input);

	vector<short> arr;
	for (int i = 0; i < input.length(); i++)
	{
		arr.emplace_back(input[i] - 48);
	}

	sort(arr.begin(), arr.end(), greater<short>());

	int left = 0;
	if (arr[input.length() - 1] != 0)
	{
		cout << -1;
		return 0;
	}
	for (int i = 0; i < input.length() - 1; i++)
	{
		int temp = left + arr[i];
		left = temp % 3;
	}
	if (left == 0)
	{
		for (int i = 0; i < input.length(); i++)
		{
			cout << arr[i];
		}
	}
	else
	{
		cout << -1;
	}

	/*
	for (int i = 0; i < input.length(); i++)
	{
		cout << arr[i] << endl;
	}
	*/
}

