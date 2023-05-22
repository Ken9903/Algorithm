#include <iostream>
#include <string>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	while (true)
	{
		string input;
		getline(cin, input);

		if (input.length() == 1 && input[0] == '#')
		{
			break;
		}
		
		int sum = 0;
		for (int i = 0; i < input.length(); i++)
		{
			if (input[i] == 'a' || input[i] == 'e' || input[i] == 'i' || input[i] == 'o' || input[i] == 'u' || input[i] == 'A' || input[i] == 'E' || input[i] == 'I' || input[i] == 'O' || input[i] == 'U')
			{
				sum++;
			}
		}
		cout << sum << '\n';


	}
	


	return 0;
}

