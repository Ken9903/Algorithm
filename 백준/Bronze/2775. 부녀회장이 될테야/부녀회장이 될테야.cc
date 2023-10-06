#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


using namespace std;

int answer(vector<vector<int>>& floar, int k, int n)
{
    if (floar[k][n] == -1)
    {
        int sum = 0;
        for (int i = 0; i <= n; i++)
        {
            sum += answer(floar, k - 1, i);
        }
        floar[k][n] = sum;

        return floar[k][n];
    }
    else
    {
        return floar[k][n];
    }
}


int main()
{
    //초기화
    vector<vector<int>> floar;
    for (int i = 0; i < 15; i++)
    {
        vector<int> room;
        for (int j = 0; j < 14; j++)
        {
            room.emplace_back(-1);
        }
        floar.emplace_back(room);
    }

    for (int i = 0; i < 14; i++)
    {
        floar[0][i] = i + 1;
    }

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int k, n;
        cin >> k >> n;

        cout << answer(floar, k, n - 1) << '\n';

    }

    

    /*
    for (int i = 0; i < floar.size(); i++)
    {
        for (int j = 0; j < floar[i].size(); j++)
        {
            cout << floar[i][j] << " ";
        }
        cout << '\n';
    }
    */
    
    
    
    return 0;
}



