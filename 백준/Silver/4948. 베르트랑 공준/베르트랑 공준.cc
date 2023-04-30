// temp.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <math.h>


using namespace std;

int main()
{
	bool arr[123456 * 3];

	fill_n(arr, 123456 * 2, 1);

	for (int i = 2; i <= sqrt(123456 * 2); i++)
	{
		if (arr[i] == 0)
		{
			// 검출 완료
		}
		else
		{
			arr[i] = 1;
			int iter = 2;
			while (i * iter <= 123456 * 2)
			{
				arr[i * iter] = 0;
				iter++;
			}
		}


	}



	while (true)
	{
		int num;
		cin >> num;
		if (num == 0)
		{
			break;
		}
		else if (num == 1)
		{
			cout << 1 << endl;
		}
		else
		{
			int count = 0;

			for (int i = num + 1; i <= num * 2; i++)
			{
				count += arr[i];
			}

			cout << count << endl;




		}
	}


}

