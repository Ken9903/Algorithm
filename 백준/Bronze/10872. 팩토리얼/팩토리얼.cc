

#include <iostream>

using namespace std;

int factorial(int f)
{
	if (f == 1)
	{
		return 1;
	}
	if (f == 0)
	{
		return 1;
	}
	return f * factorial(f - 1);
}
int main()
{
	int num;
	cin >> num;

	cout << factorial(num);
}
