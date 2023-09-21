#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>


using namespace std;



int main()
{
    int n;
    cin >> n;
    int sum = 0;

    vector<int> input;
    vector<int> sumVec;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        input.emplace_back(temp);
    }
    sort(input.begin(), input.end());

    for (int i = 0; i < n; i++)
    {
        sum = sum + input[i];
        sumVec.emplace_back(sum);
    }

    cout << accumulate(sumVec.begin(), sumVec.end(), 0);

    return 0;
}



