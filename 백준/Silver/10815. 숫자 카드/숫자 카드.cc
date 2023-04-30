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
   
	int count_n;
	cin >> count_n;

	cin.ignore();

	string str;
	getline(cin, str);
	istringstream ss(str);

	multiset<int> card_me;

	for (int i = 0; i < count_n; i++)
	{
		int temp;
		ss >> temp;

		card_me.insert(temp);
	}


	int count_m;
	cin >> count_m;

	cin.ignore();

	getline(cin, str);
	istringstream ss_2(str);

	vector<int> card_find;

	for (int i = 0; i < count_m; i++)
	{
		int temp;
		ss_2 >> temp;

		card_find.push_back(temp);
	}


	for (int i = 0; i < count_m; i++ )
	{
		if (card_me.end() == card_me.find(card_find[i]))
		{
			cout << 0 << " ";
		}
		else
		{
			cout << 1 << " ";
		}
	}
	
	


	
	



}

