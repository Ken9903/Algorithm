#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <vector>
#include <utility>
#include <math.h>

using namespace std;

int n;

int cardMax(vector<int> & dpArr,vector<int> &price, int num)
{
	if (dpArr[num] == -1)
	{
		if (num <= 1)
		{
			dpArr[num] = price[1];
		}
		else
		{
			for (int i = 1; i <= num / 2; i++)
			{
				int temp;
				temp = cardMax(dpArr, price, num - i) + cardMax(dpArr, price, i);
				if (temp > dpArr[num])
				{
					dpArr[num] = temp;
				}
			}

			if (price[num] > dpArr[num])
			{
				dpArr[num] = price[num];
			}


		}
	}
	
	return dpArr[num];
}


int main()
{
	cin >> n;

	vector<int> price;
	price.emplace_back(0); // 인덱스 맞춰 주기 위함.

	vector<int> dpArr(1001, -1);
	
	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		price.emplace_back(temp);
	}
	dpArr[1] = price[1];

	cout << cardMax(dpArr, price, n);


	


}
