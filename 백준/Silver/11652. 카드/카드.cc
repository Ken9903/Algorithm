#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <string>
#include <sstream>
#include<math.h>
#include<queue>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<long long> arr;

    for (int i = 0; i < n; i++)
    {
        long long temp;
        cin >> temp;
        arr.emplace_back(temp);
    }

    sort(arr.begin(), arr.end());
    long long max = 0;
    long long result = 0;

    vector<long long>::iterator iter;
    iter = arr.begin();
    while (iter != arr.end())
    {
        vector<long long>::iterator tempIter = upper_bound(arr.begin(), arr.end(), *iter);
        long long temp = tempIter - lower_bound(arr.begin(), arr.end(), *iter);
        if (temp > max)
        {
            max = temp;
            result = *iter;
        }
        iter = tempIter;
    }
    cout << result;

    

}


