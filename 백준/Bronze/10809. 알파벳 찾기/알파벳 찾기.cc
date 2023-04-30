#include <iostream>
#include <string>
#include <sstream>

using namespace std;



int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);		//입출력 시간에 많은 도움을 줌.

	string s;
	getline(cin, s);

	int arr[26];
	fill_n(arr, 26, -1);


	for (int i = 0; i < s.length(); i++)
	{
		if (arr[s[i] - 97] == -1)
		{
			arr[s[i] - 97] = i;
		}

	}

	for (int i = 0; i < 26; i++)
	{
		cout << arr[i] << " ";
	}

	
	
}