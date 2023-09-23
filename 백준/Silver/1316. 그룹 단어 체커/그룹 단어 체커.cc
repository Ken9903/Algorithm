#include <iostream>
#include <list>
#include <algorithm>


using namespace std;


int main()
{
    int n;
    cin >> n;
    int sum = 0;
    
    for (int i = 0; i < n; i++)
    {
        string input;
        cin >> input;
        char temp = input[0];
        bool find = true;
        for (int j = 1; j < input.length(); j++)
        {
            if (input[j] == temp)
            {

            }
            else
            {
                if (input.find(input[j - 1], j) != string::npos)
                {
                    find = false;
                    break;
                }
                temp = input[j];
 
            }
        }
        if (find == true)
        {
            sum++;
        }



    }
    cout << sum;

    return 0;
}



