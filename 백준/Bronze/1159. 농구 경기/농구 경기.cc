#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    bool forgive = true;

    vector<string> members;
    vector<int> alpabet(26, 0);
    for (int i = 0; i < n; i++)
    {
        string temp;
        cin >> temp;
        alpabet[temp[0] - 97]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (alpabet[i] >= 5)
        {
            forgive = false;
            cout << char(i + 97);
        }
    }
    if (forgive == true)
    {
        cout << "PREDAJA";
    }
    
    return 0;
}



