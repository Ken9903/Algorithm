#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;


int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> weight_tall;
    vector<int> ranking(n, 1);

    for (int i = 0; i < n; i++)
    {
        int weight, tall;
        cin >> weight >> tall;
        pair<int, int> temp;
        temp.first = weight;
        temp.second = tall;

        weight_tall.emplace_back(temp);
    }
    for (int i = 0; i < n; i++)
    {
        pair<int, int> main = weight_tall[i];
        for (int j = i + 1; j < n; j++)
        {
            if (weight_tall[j].first > main.first && weight_tall[j].second > main.second)
            {
                ranking[i]++;
            }
            else if (weight_tall[j].first < main.first && weight_tall[j].second < main.second)
            {
                ranking[j]++;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << ranking[i] << '\n';
    }

    return 0;
}



