#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <vector>
#include <utility>

using namespace std;


int main()
{
	string input;
	getline(cin, input);

	istringstream ss(input);

	int n, m, k;
	ss >> n >> m >> k;


	int tempFemale  = 0;
	int result = 0;
	for (int i = k; k >= 0; k--)
	{
		int female = n - tempFemale;
		female /= 2;

		int male = m - k;

		int min = 0;
		if (male > female)
		{
			min = female;
		}
		else
		{
			min = male;
		}
		if (min >= result)
		{
			result = min;
		}

		tempFemale++;
	}

	cout << result;

	
	



}
