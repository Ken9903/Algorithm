#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	string a, b, c, d;
	cin >> a >> b >> c >> d;

	string add_1, add_2;
	add_1 = a + b;
	add_2 = c + d;

	if (add_1.length() >= add_2.length())
	{
		int temp = add_2.length();
		for (int i = 0; i < add_1.length() - temp; i++)
		{
			add_2 = '0' + add_2;
		}
	}
	else
	{
		int temp = add_1.length();
		for (int i = 0; i < add_2.length() - temp; i++)
		{
			add_1 = '0' + add_1;
		}
	}

	vector<short> arr;



	int up = 0;
	for (int i = add_1.length() - 1; i >= 0; i--)
	{
		int result = (int)add_1[i] - 48 + (int)add_2[i] - 48 + up;
		up = 0;
		if (result >= 10)
		{
			up = 1;
			result -= 10;		
		}
		arr.emplace_back(result);
		if (i == 0 && up == 1)
		{
			arr.emplace_back(1);
		}

	}

	for (int i = arr.size() - 1; i >= 0; i--)
	{
		cout << arr[i];
	}

	
	
	return 0;
}

