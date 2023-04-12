// Project12.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;






int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);



    string input;
    getline(cin, input);

    istringstream ss(input);

    int n, b;

    ss >> n >> b;

    vector<int> myVec;

    while (true)
    {
        int object;

        object = n / b;
        if (n < b)
        {
            myVec.emplace_back(n % b);
            break;
        }
        else
        {
            myVec.emplace_back(n % b);
            n = object;
        }
    }

    for (int i = myVec.size() - 1; i >= 0; i--)
    {
        if (myVec[i] >= 10)
        {
            cout << char(myVec[i] + 55);
        }
        else
        {
            cout << myVec[i];
        }

    }






}

