// Project12.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

int arr[11];

int plus_me(int n)
{
    if (n == 1)
    {
        return arr[1];
    }
    else if (n == 2)
    {
        return arr[2];
    }
    else if (n == 3)
    {
        return arr[3];
    }
    else
    {
        if (arr[n] != -1)
        {
            return arr[n];
        }
        else
        {

            arr[n] = plus_me(n - 3) + plus_me(n - 2) + plus_me(n - 1);
            return arr[n];
        }
    }

}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);



    fill_n(arr, 11, -1);
    arr[1] = 1;
    arr[2] = 2;
    arr[3] = 4;


    int count;
    cin >> count;


    for (int i = 0; i < count; i++)
    {
        int num;
        cin >> num;
        cout << plus_me(num) << '\n';

    }







}

