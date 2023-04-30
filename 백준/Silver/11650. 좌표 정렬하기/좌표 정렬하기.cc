#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int, int>a, pair<int, int>b)
{
	if (a.first == b.first)
	{
		return a.second < b.second;
	}
	else
	{
		return a.first < b.first;
	}
}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);		//입출력 시간에 많은 도움을 줌.


	int n;
	cin >> n;
	cin.ignore();

	vector<pair<int, int>> pos;

	for (int i = 0; i < n; i++)
	{
		string input;
		getline(cin, input);

		istringstream ss(input);

		int x, y;
		ss >> x >> y;
		pos.push_back({ x,y });
	}

	sort(pos.begin(), pos.end(), compare);

	for (int i = 0; i < n; i++)
	{
		cout << pos[i].first << " " << pos[i].second << "\n";
	}





}