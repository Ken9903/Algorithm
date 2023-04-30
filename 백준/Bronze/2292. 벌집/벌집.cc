

#include <iostream>

using namespace std;

int main()
{
	int num;
	cin >> num;

	int minus = 6;
	int count = 2;
	if (num == 1)
	{
		cout << 1;
		return 0;
	}
	while (true)
	{
		if (num < minus + 2)
		{
			cout << count;
			break;
		}
		else
		{
			num -= minus;
			minus += 6;
			count += 1;
		}
	}
}
