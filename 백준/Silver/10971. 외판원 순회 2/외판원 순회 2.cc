// Project18.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;




int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<int> permutation;
	for (int i = 0; i < n; i++)
	{
		permutation.emplace_back(i);
	}
	vector<vector<int>> wArr;

	for (int i = 0; i < n; i++)
	{
		vector<int> temp;
		for (int j = 0; j < n; j++)
		{
			int tempNum;
			cin >> tempNum;
			temp.emplace_back(tempNum);
		}
		wArr.emplace_back(temp);
	}
	
	int min = 20000000;
	do
	{
		int sum = 0;
		for (int i = 0; i < n - 1; i++)
		{
			if (wArr[permutation[i]][permutation[i+1]] == 0)
			{
				sum += 20000000;
			}
			else
			{
				sum += wArr[permutation[i]][permutation[i + 1]];
			}
			
		}
		if (wArr[permutation[n - 1]][permutation[0]] == 0)
		{
			sum += 20000000;
		}
		else
		{
			sum += wArr[permutation[n - 1]][permutation[0]];
		}
		
		if (sum <= min)
		{
			min = sum;
		}
	} while (next_permutation(permutation.begin(), permutation.end()));

	cout << min;
	
}

