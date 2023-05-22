#include <iostream>
#include <vector>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	vector<bool> timeTable;
	vector<bool> bellTable;
	bellTable.emplace_back(true);

	int n, l, d;
	cin >> n >> l >> d;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < l; j++)
		{
			timeTable.emplace_back(false); // 못들음
		}
		for (int j = 0; j < 5; j++)
		{
			timeTable.emplace_back(true); //5초 동안 들음
		}	
	}

	while (true)
	{
		if (bellTable.size() > timeTable.size())
		{
			break;
		}
		else
		{
			for (int i = 0; i < d - 1; i++)
			{
				bellTable.emplace_back(false); // 못들음
			}
			bellTable.emplace_back(true);
		}
	}

	int tempSize = bellTable.size() - timeTable.size();
	for (int i = 0; i < tempSize; i++)
	{
		timeTable.emplace_back(true);
	}

	for (int i = 0; i < bellTable.size(); i++)
	{
		if (timeTable[i] == true && bellTable[i] == true)
		{
			cout << i;
			break;
		}
	
	}

	
	return 0;
}

