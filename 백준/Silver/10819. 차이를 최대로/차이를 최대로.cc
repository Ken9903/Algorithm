#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <vector>
#include <utility>
#include <math.h>

using namespace std;




int main()
{
	
	int n;
	cin >> n;

	cin.ignore();

	string input;
	getline(cin, input);

	istringstream ss(input);

	vector<int> arr;

	for (int i = 0; i < n; i++)
	{
		int temp;
		ss >> temp;

		arr.emplace_back(temp);
	}

	//자료입력 완료

	sort(arr.begin(), arr.end());

	int max = 0;



	
	do {
		int sum = 0;
		for (int i = 0; i < n - 1; i++)
		{
			sum += abs(arr[i] - arr[i + 1]);
		}
		if (sum >= max)
		{
			max = sum;
		}

		

	} while (next_permutation(arr.begin(), arr.end()));
	
	cout << max;




}
