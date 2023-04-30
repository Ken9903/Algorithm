

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    int arr[100][100] = {0};

    int count;
    cin >> count;

    cin.ignore();
    

    int sum = 0;

    for (int i = 0; i < count ; i++)
    {
        string num_arr;
        getline(cin, num_arr);
        istringstream ss(num_arr);
        int ver;
        int hor;

        ss >> ver;
        ss >> hor;
        
        for (int v = ver; v < ver + 10; v++)
        {
            for (int h = hor; h < hor + 10; h++)
            {
                arr[v][h] = 1;
            }
        }
        
    }

    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            sum += arr[i][j];
        }
    }
    cout << sum;
    
    
}
