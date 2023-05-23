#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <algorithm>
#include <sstream>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	int n;
	cin >> n;
	cin.ignore();

	set<string, greater<string>> in;

	for (int i = 0; i < n; i++)
	{
		string input;
		getline(cin, input);

		istringstream ss(input);
		string name, state;
		ss >> name >> state;
		
		if (state == "enter")
		{
			in.insert(name);
		}
		else
		{
			in.erase(name);
		}

	}


	for (auto iter = in.begin(); iter != in.end(); iter++)
	{
		cout << *iter << '\n';
	}

	
	return 0;
}

