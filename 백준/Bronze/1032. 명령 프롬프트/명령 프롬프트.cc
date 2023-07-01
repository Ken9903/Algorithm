#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> inputs;
    for (int i = 0; i < n; i++)
    {
        string temp;
        cin >> temp;
        inputs.emplace_back(temp);
    }

    string result = inputs[0];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < inputs[0].length(); j++)
        {
            if (result[j] != inputs[i][j])
            {
                result[j] = '?';
            }
        }
    }

    cout << result;
    return 0;
}



