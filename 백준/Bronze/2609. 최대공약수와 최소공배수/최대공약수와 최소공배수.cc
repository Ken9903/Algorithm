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

	int a, b;

	ss >> a >> b;

	vector<int> aVec;
	vector<int> bVec;

	aVec.push_back(1);
	bVec.push_back(1);

	if (a == b)
	{
		cout << a << '\n';
		cout << b;

		return 0;
	}
	if (a % 2 == 0)
	{
		if (a == 2)
		{
			aVec.push_back(2);
		}
		for (int i = 2; i <= a / 2; i++)
		{
			if (a % i == 0)
			{
				aVec.push_back(i);
			}
		}

	}
	else
	{
		if (a == 3)
		{
			aVec.push_back(3);
		}
		for (int i = 2; i <= a / 3; i++)
		{
			if (a % i == 0)
			{
				aVec.push_back(i);
			}
		}
	}
	aVec.push_back(a);

	if (b % 2 == 0)
	{
		if (b == 2)
		{
			bVec.push_back(2);
		}
		for (int i = 2; i <= b / 2; i++)
		{
			if (b % i == 0)
			{
				bVec.push_back(i);
			}
		}
	}
	else
	{
		if (b == 3)
		{
			bVec.push_back(3);
		}
		for (int i = 2; i <= b / 3; i++)
		{
			if (b % i == 0)
			{
				bVec.push_back(i);
			}
		}
	}
	bVec.push_back(b);

	for (int i = aVec.size() - 1; i >= 0; i--)
	{
		if (find(bVec.begin(), bVec.end(), aVec[i]) != bVec.end())
		{
			cout << aVec[i];
			break;
		}
	}
	cout << "\n";


	vector<int> aVec_2;
	vector<int> bVec_2;

	int max = a * b;
	
	for (int i = a; i <= max; i += a)
	{
		aVec_2.push_back(i);
	}

	for (int i = b; i <= max; i += b)
	{
		bVec_2.push_back(i);
	}

	for (int i = 0 ; i < aVec_2.size(); i++)
	{
		if (find(bVec_2.begin(), bVec_2.end(), aVec_2[i]) != bVec_2.end())
		{
			cout << aVec_2[i];
			break;
		}
	}

	


	

	



}
