#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;
    
    vector<int> input;
    int sum = 0;
    input.emplace_back(0);
    for (int i = 1; i <= n; i++)
    {
        int temp;
        cin >> temp;
        sum += temp;

        input.emplace_back(sum);
    }

    for (int q = 0; q < m; q++)
    {
        int i, j;
        cin >> i >> j;

        cout << input[j] - input[i - 1] << '\n';

    }

    
    return 0;
}



