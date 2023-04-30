// temp.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>


using namespace std;

int main()
{
   
	int num = 0;
	cin >> num;

	int fivecount = num / 5;
	int count = fivecount;

	int i;

	for (i = fivecount; i >= 0; i--)
	{

		int sum = num;
		sum -= i * 5;

		if (sum % 3 != 0)
		{
			count = 0;
		}
		if (sum % 3 == 0)
		{
			count += sum / 3;
			cout << count;
			return 0;
		}
		count = i - 1;
	}

	if (count == -1)
	{
		cout << -1;
	}

}

