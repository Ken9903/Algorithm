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
	string input;
	getline(cin, input);

	istringstream ss(input);

	int n, m;

	ss >> n;
	ss >> m;

	set<string> hear;
	set<string> see;

	for (int i = 0; i < n; i++)
	{
		string temp;
		cin >> temp;
		hear.insert(temp);
	}

	for (int i = 0; i < m; i++)
	{
		string temp;
		cin >> temp;
		see.insert(temp);
	}

	int whereBIg = n - m;


	set<string>::iterator iter;



	int count = 0;
	set<string> hear_see;

	if (n - m > 0)
	{
		for (iter = hear.begin(); iter != hear.end(); iter++)
		{
			if (see.end() != see.find(*iter))
			{
				count++;
				hear_see.insert(*iter);
			}
		}
	}
	else
	{
		
		for (iter = see.begin(); iter != see.end(); iter++)
		{
			
			if (hear.end() != hear.find(*iter))
			{
				count++;
				hear_see.insert(*iter);
			}
			
		}
		
	}

	cout << count << endl;

	for (iter = hear_see.begin(); iter != hear_see.end(); iter++)
	{
		cout << *iter << endl;
	}
	
	
	


	
	



}

