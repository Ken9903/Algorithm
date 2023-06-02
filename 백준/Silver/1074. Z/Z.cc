#include <iostream>
#include <math.h>
using namespace std;

void zDef(int n, int startNum, int r, int c)
{
	if (n == 2)
	{
		int result = startNum + (r - 1) * 2 + (c - 1);
		cout << result;
		return;
	}


	if (r <= n / 2 && c <= n / 2)
	{
		zDef(n / 2, startNum, r, c);
	}
	else if (r <= n / 2 && c > n / 2)
	{
		zDef(n / 2, startNum + pow(n, 2) / 4, r, c - n / 2);
	}
	else if (r > n / 2 && c <= n / 2)
	{
		zDef(n / 2, startNum + pow(n, 2) / 4 * 2, r - n / 2, c);
	}
	else if (r > n / 2 && c > n / 2)
	{
		zDef(n / 2, startNum + pow(n, 2) / 4 * 3, r - n / 2, c - n / 2);
	}	
	else
	{
		cout << "오류";
	}
}


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	int n, r, c;
	cin >> n >> r >> c;
	r++;
	c++;

	zDef(pow(2, n), 0, r, c);


	
	return 0;
}

