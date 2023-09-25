#include <iostream>
#include <vector>
#include <string>
#include <istream>

using namespace std;

 

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> yosep;
    vector<int> result;
    for (int i = 0; i < n; i++)
    {
        yosep.emplace_back(i + 1);
    }

    int i = k;
    while (yosep.size() != 0)
    {
        if (i > yosep.size())
        {
            i = i % yosep.size();
        }
        if (i == 0)
        {
            i = yosep.size();
        }
        //cout <<"i값" << i - 1 << " ";
        result.emplace_back(yosep[i - 1]);
        //cout << *(yosep.begin() + i - 1) << " ";
        yosep.erase(yosep.begin() + i - 1);
        i--;
        i = i + k;
    }

    cout << '<';
    for (int i = 0; i < n - 1; i++)
    {
        cout << result[i] << ',' << " ";
    }
    cout << result[n - 1];
    cout << '>';
}




