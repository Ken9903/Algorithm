#include <iostream>
#include <string>


using namespace std;

int main()
{
    int n;
    cin >> n;
    int result = 0;
    if (n < 100)
    {
        result = n;
        cout << result;
        return 0;
    }
    else
    {
        result += 99;
    }

    for (int i = n; i > 99; i--)
    {
        string temp = to_string(i);
        int d = temp[0]- 48 - (temp[1] - 48);
        bool add = true;
        for (int j = 1; j < temp.length() - 1; j++)
        {
            if (d != temp[j] - 48 - (temp[j + 1] - 48))
            {
                add = false;
            }       
        }
        if (add == true)
        {
            result++;
        }

    }
    cout << result;
    return 0;
}



