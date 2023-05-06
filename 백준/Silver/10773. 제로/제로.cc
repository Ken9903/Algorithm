#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int sumCal(vector<int> arr)
{
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
    }

    return sum;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int k;
    cin >> k;
    
    vector<int> arr;

    for (int i = 0; i < k; i++)
    {
        int temp;
        cin >> temp;
        if (temp == 0)
        {
            arr.pop_back();
        }
        else
        {
            arr.emplace_back(temp);
        }
        
    }

    cout << sumCal(arr);


}


