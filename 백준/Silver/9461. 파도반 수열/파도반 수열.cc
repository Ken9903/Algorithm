#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<long long> arr;
    arr.emplace_back(1);
    arr.emplace_back(1);
    arr.emplace_back(1);
    arr.emplace_back(2);
    arr.emplace_back(2);


    for (int i = 4; i < 100; i++)
    {
        arr.emplace_back(arr[i] + arr[i - 4]);
    }

    for (int i = 0; i < t; i++)
    {
        int input;
        cin >> input;

        cout << arr[input - 1] << '\n';
    }

    return 0;
}



