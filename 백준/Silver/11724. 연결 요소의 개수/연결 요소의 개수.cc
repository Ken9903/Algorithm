// Project8.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string input;
	getline(cin, input);

	istringstream ss(input);

	int n, m;

	ss >> n >> m;

	int arr[1001];
	fill_n(arr, 1001, -1);

	for (int i = 0; i < m ; i++)
	{
		string in;
		getline(cin, in);

		istringstream ss_2(in);

		int x, y;
		ss_2 >> x >> y;

		if (x > y)
		{
			swap(x, y);
		}

		int x_parant = x;
		int x_index = x;
		int y_parant = y;
		int y_index = y;
		while (true)
		{
			if (x_parant == -1)
			{
				break;
			}
			else
			{
				x_index = x_parant;
				x_parant = arr[x_parant];
			}
		}
		while (true)
		{
			if (y_parant == -1)
			{
				break;
			}
			else
			{
				y_index = y_parant;
				y_parant = arr[y_parant];
			}
		}
		if (x_parant == -1 && y_parant == -1 && (y_index != x_index))
		{
			arr[y_index] = x_index;
		}
	}


	
	int sum = 0;
	for (int i = 0; i <= n; i++)
	{
		if (arr[i] == -1)
		{
			sum++;
		}
	}
	sum--;

	cout << sum;
	

	


	

	



}
