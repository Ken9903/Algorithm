#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#include <numeric>


using namespace std;



int main()
{
    int n;
    cin >> n;

    set<int> inputArr;
    vector<int> findArr;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        
        inputArr.insert(temp);
    }

    int m;
    cin >> m;

    for (int i = 0; i < m; i++)
    {
        int temp;
        cin >> temp;

        findArr.emplace_back(temp);
    }

    for (int i = 0; i < m; i++)
    {
        if (inputArr.find(findArr[i]) != inputArr.end())
        {
            cout << 1 << '\n';
        }
        else
        {
            cout << 0 << '\n';
        }
    }


    return 0;
}



