#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <vector>
#include <utility>

using namespace std;

long long arr[91];

long long pinaryNum(long long n)
{
	if (n == 1)
	{
		return 1;
	}
	else if (n == 2)
	{
		return 1;
	}
	else
	{
		if(arr[n] == -1)
		{
			arr[n] = pinaryNum(n - 2) + pinaryNum(n - 1);
			return arr[n];
		}
		else
		{
			return arr[n];
		}
	}

	
}


int main()
{
	int n;
	cin >> n;

	fill_n(arr, 91, -1);
	arr[1] = 1;
	arr[2] = 1;

	cout << pinaryNum(n);



}
