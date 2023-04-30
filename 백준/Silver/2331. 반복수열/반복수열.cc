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
	
	string input;
	getline(cin, input);

	istringstream ss(input);

	string a;
	int	p;

	ss >> a >> p;

	vector<string> arr;

	arr.emplace_back(a);
	string cur = a;

	int result;
	
	while (true)
	{
		cur = *(arr.end() - 1);
		int sum = 0;

		
		for (int i = 0; i < cur.length(); i++)
		{
			int temp = cur[i] - 48;
			sum += pow(temp, p);
		}
		

		if (find(arr.begin(), arr.end(), to_string(sum)) != arr.end())
		{
			result = (find(arr.begin(), arr.end(), to_string(sum)) - arr.begin());
			break;
		}
		else
		{
			arr.emplace_back(to_string(sum));
		}

	}
	cout << result;
	
	


}
