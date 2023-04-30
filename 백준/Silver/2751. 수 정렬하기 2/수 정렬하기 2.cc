// temp.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <list>
#include <algorithm>

using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);


	int count;
	cin >> count;

	list<int> arr;

	for (int i = 0; i < count; i++)
	{
		int temp;
		cin >> temp;

		arr.push_back(temp);
		
	}


	arr.sort();

	list<int>::iterator iter;

	for (iter = arr.begin(); iter != arr.end(); iter++)
	{
		cout << *iter << '\n';
	}


}




