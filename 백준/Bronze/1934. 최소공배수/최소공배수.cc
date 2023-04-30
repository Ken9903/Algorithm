// temp.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <sstream>
#include <algorithm>


using namespace std;

int main()
{
	
	int count;
	cin >> count;

	cin.ignore();

	for (int i = 0; i < count; i++)
	{
		string num;
		getline(cin, num);

		istringstream ss(num);

		int a, b;

		ss >> a >> b;

		if (a <= b)
		{
			if (b % a == 0)
			{
				cout << b << endl;
			}
			else
			{
				int a_mul = 2;
				int b_mul = 1;
				while (true)
				{
					if (b * b_mul % a * a_mul == 0)
					{
						cout << b * b_mul << endl;
						break;
					}
					else if (a * a_mul > b * b_mul)
					{
						b_mul++;
					}
					else
					{
						a_mul++;
					}
				}
			}
		}
		else
		{
			if (a % b == 0)
			{
				cout << a << endl;
			}
			else
			{
				int a_mul = 1;
				int b_mul = 2;
				while (true)
				{
					if (a * a_mul % b * b_mul == 0)
					{
						cout << a * a_mul << endl;
						break;
					}
					else if (b * b_mul > a * a_mul)
					{
						a_mul++;
					}
					else
					{
						b_mul++;
					}
				}
			}
		}

	}

	
	



}

