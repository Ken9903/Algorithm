// temp.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
   
	string num;
	string card;

	getline(cin, num);
	getline(cin, card);

	istringstream ss(num);

	int n, m;

	ss >> n >> m;

	istringstream ss2(card);

	vector<int> carVec;

	for (int i = 0; i < n; i++)
	{
		int temp;
		ss2 >> temp;
		carVec.push_back(temp);
	}



	int result = carVec[0] + carVec[1] + carVec[2];
	for (int i1 = 0; i1 < n - 2; i1++)
	{
		for (int i2 = i1 + 1; i2 < n - 1; i2++)
		{
			for (int i3 = i2 + 1; i3 < n; i3++)
			{
				if (abs(m - result) > abs(m - (carVec[i1] + carVec[i2] + carVec[i3])))
				{
					if (m - (carVec[i1] + carVec[i2] + carVec[i3]) >= 0)
					{
						result = carVec[i1] + carVec[i2] + carVec[i3];
					}					
				}						
			}
		}
	}

	cout << result;

}

