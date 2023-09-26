#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int dp(int x, vector<int> stair_input, vector<int> &dpArr_one, vector<int>& dpArr_two, int continue_num)
{
    if (x == 1)
    {
        return stair_input[0];
    }
    if (x == 2)
    {
        if (continue_num == 1)
        {
            return stair_input[1] + stair_input[0];
        }
        else if (continue_num == 2)
        {
            return stair_input[1];
        }
    }
    if (continue_num == 1 && dpArr_one[x] != 0)
    {
        return dpArr_one[x];
    }
    else if (continue_num == 1 && dpArr_one[x] == 0)
    {
        int first = dp(x - 1, stair_input, dpArr_one, dpArr_two, continue_num + 1) + stair_input[x - 1];
        int second = dp(x - 2, stair_input, dpArr_one, dpArr_two, 1) + stair_input[x - 1];
        if (first > second)
        {
            dpArr_one[x] = first;
        }
        else
        {
            dpArr_one[x] = second;
        }

        return dpArr_one[x];
    }
    else if (continue_num == 2 && dpArr_two[x] != 0)
    {
        return dpArr_two[x];
    }
    else if (continue_num == 2 && dpArr_two[x] == 0)
    {
        dpArr_two[x] = dp(x - 2, stair_input, dpArr_one, dpArr_two, 1) + stair_input[x - 1];

        return dpArr_two[x];

    }
    else
    {
        cout << "Error";
    }
   

}

int main()
{
    int n;
    cin >> n;

    vector<int> dpArr_one(301, 0);
    vector<int> dpArr_two(301, 0);
    vector<int> stair_input;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        stair_input.emplace_back(temp);
    }
    cout << dp(n, stair_input, dpArr_one, dpArr_two, 1)<< '\n';
    /*
    for (int i = 1; i <= n; i++)
    {
        cout << dpArr_one[i] << " ";
    }
    cout << '\n';
    for (int i = 1; i <= n; i++)
    {
        cout << dpArr_two[i] << " ";
    }
    */
    //cout << dp(n, stair_input, dpArr, 1);
    
    return 0;
}



