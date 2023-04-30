// temp.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>



using namespace std;

int arr[1001];

int rect(int n)
{
	if (n == 1)
	{
		arr[1] = 1;
		return arr[1];
	}
	else if (n == 2)
	{
		arr[2] = 2;
		return arr[2];
	}
	else
	{
		if (arr[n] == -1)
		{
			arr[n] = (rect(n - 1) + rect(n - 2) % 10007);
			return arr[n];
		}
		else
		{
			return arr[n];
		}
	}
}

int main()
{

		fill_n(arr, 1001, -1);


		int num;
		cin >> num;

		cout << rect(num) % 10007 << endl;


	




}




