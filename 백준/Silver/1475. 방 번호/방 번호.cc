#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


using namespace std;

int main()
{
    vector<int> number;

    for (int i = 0; i < 10; i++)
    {
        number.emplace_back(0);
    }


    int roomNumber;
    cin >> roomNumber;
    
    string s_roomNum = to_string(roomNumber);

    for (int i = 0; i < s_roomNum.length(); i++)
    {
        number[s_roomNum[i] - 48]++;
    }

    number[6] += number[9];
    number[9] = 0;
    if (number[6] % 2 == 0)
    {
        number[6] = number[6] / 2;
    }
    else
    {
        number[6] = number[6] / 2 + 1;
    }

    cout << *max_element(number.begin(), number.end());
;    
    return 0;
}



