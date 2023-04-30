// temp.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>



using namespace std;
int* arr;

int divide(int n)
{
	
	if (n == 1)
	{
		if (arr[1] == -1)
		{
			arr[1] = 0;
		}
		return arr[1];
	}
	else if (n == 2)
	{
		if (arr[2] == -1)
		{
			arr[2] = 1;
		}
		return arr[2];
	}
	else if (n == 3)
	{
		if (arr[3] == -1)
		{
			arr[3] = 1;
		}
		return arr[3];
	}
	else
	{
		
		if (arr[n] == -1)
		{
			int divide_1 = divide(n - 1);
			int divide_2 = divide(n / 2);
			int divide_3 = divide(n / 3);
			
			
			if (n % 2 == 0 && n % 3 == 0)
			{
				
				int min;
				if (divide_1 <= divide_2)
				{
					min = divide_1;
				}
				else
				{
					min = divide_2;
				}

				if (divide_2 <= divide_3)
				{
					if (divide_2 < min)
					{
						min = divide_2;
					}
				}
				else
				{
					if (divide_3 < min)
					{
						min = divide_3;
					}
				}

				if (divide_3 <= divide_1)
				{
					if (divide_3 < min)
					{
						min = divide_3;
					}
				}
				else
				{
					if (divide_1 < min)
					{
						min = divide_1;
					}
				}

				arr[n] = min;
				return arr[n] + 1;
				
			
			}
			else if (n % 2 == 0 && n % 3 != 0)
			{
				int min;
				if (divide_1 <= divide_2)
				{
					min = divide_1;
				}
				else
				{
					min = divide_2;
				}			
				arr[n] = min;
				return arr[n] + 1;
			}
			else if (n % 2 != 0 && n % 3 == 0)
			{
				int min;
				if (divide_1 <= divide_3)
				{
					min = divide_1;
				}
				else
				{
					min = divide_3;
				}
				arr[n] = min;
				return arr[n] + 1;
			}
			else if (n % 2 != 0 && n % 3 != 0)
			{
				arr[n] = divide_1;
				return arr[n] + 1;
			}
			
	
		}
		else
		{
			return arr[n] + 1;
		}
		
		



	}
	
}
int main()
{
		

		int num;
		cin >> num;

		arr = new int[num + 1];
		fill_n(arr, num + 1, -1);


		if (num == 1)
		{
			cout << 0;

			return 0;
		}
		else
		{
			cout << divide(num) << endl;
		}

	
	


}




