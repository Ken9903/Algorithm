// Project8.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;


int n, m;
vector<int> treeLength;

void calculate(int left, int right)
{
	int myleft = left;
	int myright = right;

	long long sum = 0;
	int mid = (myleft + myright) / 2;

	for (int i = 0; i < n; i++) //실제 연산 for문
	{
		if (treeLength[i] - mid >= 0)
		{
			sum += (treeLength[i] - mid);
		}
	}

	if (sum >= m) //성공
	{
		if (myleft == mid)
		{
			if (myright - myleft == 1) //예외처리
			{
				int sum = 0;
				for (int i = 0; i < n; i++) //실제 연산 for문
				{
					if (treeLength[i] - myright >= 0)
					{
						sum += (treeLength[i] - myright);
					}
				}
				if (sum >= m) //예외 성공
				{
					cout << myright;
					return;
				}
			}
			cout << myleft; //예외 실패
			return;
		}
		myleft = mid;
		calculate(myleft, myright);
	}
	else //실패
	{
		myright = mid;
		calculate(myleft, myright);

	}
}



int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string input;
	getline(cin, input);

	istringstream ss(input);


	ss >> n >> m;

	string input_2;
	getline(cin, input_2);

	istringstream ss_2(input_2);

	for (int i = 0; i < n; i++)
	{
		int temp;
		ss_2 >> temp;

		treeLength.push_back(temp);
	}

	int left, right;
	left = 0;
	right = *max_element(treeLength.begin(), treeLength.end());

	calculate(left, right);







}
