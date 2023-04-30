

#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int num;
    cin >> num;
    sqrt(num);
    int k = 2;
    while (num != 1)
    {
        if (num % k == 0)
        {
            cout << k << endl;
            num /= k;
        }
        else
        {
            k++;
        }
    }

  

}
