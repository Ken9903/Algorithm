#include <iostream>
#include<math.h>

using namespace std;

void primeCheck(int input, int& result)
{
    if (input == 1)
    {
        return;
    }
    int temp = sqrt(input);
    for (int i = 2; i <= temp; i++)
    {
        if (input % i == 0)
        {
            return;
        }
    }
    result++;
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int result = 0;
    
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;

        primeCheck(input, result);
    }

    cout << result;

}


