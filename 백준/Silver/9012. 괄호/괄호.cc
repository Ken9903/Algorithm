#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;



int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);		//입출력 시간에 많은 도움을 줌.


	int n;
	cin >> n;
	cin.ignore();






	for (int j = 0; j < n; j++)
	{
		string input;
		getline(cin, input);

		int stack[50];
		int stackIndex = 0;

		int end = false;
		for (int i = 0; i < input.length(); i++)
		{
			if (input[i] == '(')
			{
				stack[stackIndex] = 1;
				stackIndex++;
			}
			else if (input[i] == ')')
			{
				if (stackIndex <= 0)
				{
					end = true;
					cout << "NO" << "\n";
					break;
				}
				else
				{
					stack[stackIndex] = 0;
					stackIndex--;
				}
			}
		}

		if (stackIndex > 0)
		{
			cout << "NO" << "\n";
		}
		else
		{
			if (end == false)
			{
				cout << "YES" << "\n";
			}
			
		}

	}
	
}