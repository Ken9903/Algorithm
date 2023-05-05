#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int dpDef(int index, vector<int> arr, vector<int>& dpArr, int n)
{
    if (index == n - 1)
    {
        return 1;
    }
    if (dpArr[index] == -1)
    {
        int max = 0;
        for (int i = index + 1; i < n; i++)
        {
            if (arr[i] > arr[index])
            {
                int temp = dpDef(i, arr, dpArr, n);
                if (temp > max)
                {
                    max = temp;
                }
            }
        }
        dpArr[index] = 1 + max;
        return dpArr[index];
    }
    else
    {
        return dpArr[index];
    }
   
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    vector<int> dpArr;
    vector<int> arr;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        arr.emplace_back(temp);
        dpArr.emplace_back(-1);
    }
    dpArr[n - 1] = 1;

    int max = 0;
    for (int i = 0; i < n; i++)
    {
        int temp = dpDef(i, arr, dpArr, n);
        if (temp > max)
        {
            max = temp;
        }
    }

    cout << max;
    


}


