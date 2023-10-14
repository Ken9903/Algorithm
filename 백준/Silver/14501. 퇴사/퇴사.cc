#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


using namespace std;

int dp(vector<int>& dpArr, vector<int> Ti, vector<int> Pi, int n, int cur_num)
{
    if (dpArr[cur_num] == -1)
    {
        if (Ti[cur_num] <=  n  - cur_num) // 돌아감
        {
            int max = 0;
            for (int i = cur_num + Ti[cur_num]; i < n; i++)
            {
                int temp = dp(dpArr, Ti, Pi, n, i);
                if (temp >= max)
                {
                    max = temp;
                }
            }
            dpArr[cur_num] = max + Pi[cur_num];
            return dpArr[cur_num];
        }
        else //안돌아감
        {
            dpArr[cur_num] = 0;
            return 0;
        }
       
    }
    else
    {
        return dpArr[cur_num];
    }
}


int main()
{
    vector<int> dpArr;
    vector<int> Ti;
    vector<int> Pi;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int t, p;
        cin >> t >> p;

        Ti.emplace_back(t);
        Pi.emplace_back(p);

        dpArr.emplace_back(-1);
    }

    int max = 0;
    for (int i = 0; i < n; i++)
    {
        int temp = dp(dpArr, Ti, Pi, n, i);
        if (temp >= max)
        {
            max = temp;
        }
    }
    /*
    for (int i = 0; i < n; i++)
    {
        cout << dpArr[i] << " ";
    }
    */

    cout << max;


;    
    return 0;
}



