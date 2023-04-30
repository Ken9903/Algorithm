// Project5.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> kVec;

long k, n;

bool makelanEx(long long left, long long right);


void makelan(long long left, long long right)
{
	long long mid = (left + right) / 2;
	if (mid == 0)
	{
		mid = 1;
	}

	int count = 0;
	for (int j = 0; j < k; j++)
	{

		count += kVec[j] / mid;

	}
	if (count >= n) // 성공
	{
		if (left == mid)
		{
			if (makelanEx(left + 1, right) == false)
			{
				cout << mid;
				return;
			}
			return;
			
		}
		makelan(mid, right);

	}
	else //실패
	{
		makelan(left, mid);

	}

}
bool makelanEx(long long left, long long right)
{

	long long mid = (left + right) / 2;
	if (mid == 0)
	{
		mid = 1;
	}
	int count = 0;
	for (int j = 0; j < k; j++)
	{
		count += kVec[j] / mid;
	}
	if (count >= n) // 성공
	{
		if (left == mid)
		{
			cout << mid;
			return true;
		}


	}
	else //실패
	{
		return false;

	}

}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string input;
	getline(cin, input);

	istringstream ss(input);

	ss >> k >> n;


	long long sum = 0;
	for (int i = 0; i < k; i++)
	{
		int temp;
		cin >> temp;

		kVec.push_back(temp);

		sum += temp;
	}


	long long initNum = sum / n; //최적의 상태라 소수점 반올림 하는 경우가 없음. 그러니까 버림.
	makelan(*min_element(kVec.begin(), kVec.end()) / n, initNum);


}

