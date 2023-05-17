#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string input;
    getline(cin, input);

    for (int i = 0; i < input.length(); i++)
    {
        int temp = 0;
        if ((input[i] >= 65 && input[i] <= 90))
        {
            temp = input[i] + 13;
            if (temp > 90)
            {
                temp -= 26;
            }

            cout << char(temp);
        }
        else if ((input[i] >= 97 && input[i] <= 122))
        {
            temp = input[i] + 13;
            if (temp > 122)
            {
                temp -= 26;
            }
            cout << char(temp);
        }
        else
        {
            cout << input[i];
        }
    }


    return 0;
}
