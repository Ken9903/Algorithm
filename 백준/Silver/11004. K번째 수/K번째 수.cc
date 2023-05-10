// Project20.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, k;
	cin >> n >> k;

	vector<long long> arr;
	for (int i = 0; i < n; i++)
	{
		long long temp;
		cin >> temp;
		arr.emplace_back(temp);
	}

	sort(arr.begin(), arr.end());

	cout << arr[k-1];
}

