#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <vector>
#include <utility>

using namespace std;

vector < pair<int, int>> process;

int sum = 0;
void hanoi(int n, int start, int middle, int end)
{
	if (n == 1)
	{
		pair<int, int> temp;
		temp.first = start;
		temp.second = end;
		process.emplace_back(temp);
		sum++;
	}
	else if (n == 2)
	{
		hanoi(1, start, end, middle);
		hanoi(1, start, middle, end);
		hanoi(1, middle, start, end);
	}
	else
	{
		hanoi(n - 1, start, end, middle);
		hanoi(1, start, middle, end);
		hanoi(n - 1, middle, start, end);
	}
}

int main()
{
	int n;
	cin >> n;

	hanoi(n, 1, 2, 3);

	cout << sum << '\n';

	for (int i = 0; i < process.size(); i++)
	{
		cout << process[i].first << " " << process[i].second << '\n';
	}

	
	



}
