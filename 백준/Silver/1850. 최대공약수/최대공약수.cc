
#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <string>
#include <sstream>
#include<math.h>
using namespace std;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);



    string input;
    getline(cin, input);

    istringstream ss(input);

    long long a, b;
    long long iterNum;

    ss >> a >> b;

    while (true)
    {
        if (a > b)
        {
            if (a % b != 0)
            {
                long long temp = a;
                a = b;
                b = temp % b;
            }
            else
            {
                iterNum = b;
                break;
            }
        }
        else
        {
            if (b % a != 0)
            {
                long long temp = b;
                b = a;
                a = temp % a;
            }
            else
            {
                iterNum = a;
                break;
            }
        }
    }

    /*
    vector<long long> aVec;
    vector<long long> bVec;


    for (long long i = 1; i <= sqrt(a); i++)
    {
        if (a % i == 0)
        {
            aVec.push_back(i);
            aVec.push_back(a / i);
        }
    }

    for (long long i = 1; i <= sqrt(b); i++)
    {
        if (b % i == 0)
        {
            bVec.push_back(i);
            bVec.push_back(b / i);
        }
    }



    vector<long long> maxVec;

    for (long long i = 0; i < bVec.size(); i++)
    {
        vector<long long>::iterator iter;
        iter = find(aVec.begin(), aVec.end(), bVec[i]);
        if (iter != aVec.end())
        {
            maxVec.push_back(*iter);
        }

    }
    iterNum = *max_element(maxVec.begin(), maxVec.end());
    */

    for (int i = 0; i < iterNum; i++)
    {
        cout << 1;
    }
}


