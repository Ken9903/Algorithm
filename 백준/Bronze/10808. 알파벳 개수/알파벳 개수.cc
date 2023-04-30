// Project4.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>

using namespace std;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string str;
    getline(cin, str);

    int arr[26] = {0};

    for (int i = 0; i < str.length(); i++)
    {
        arr[int(str[i]) - 97] += 1;
    }

    for (int i = 0; i < 26; i++)
    {
        cout << arr[i] << " ";
    }

   
   
}


