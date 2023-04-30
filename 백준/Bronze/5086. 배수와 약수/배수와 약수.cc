

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    while (true)
    {
        string str;
        getline(cin, str);
        istringstream ss(str);

        int front;
        int back;
        
        ss >> front >> back;

        if (front == 0 && back == 0)
        {
            break;
        }

        if (front % back == 0)
        {
            cout << "multiple" << endl;
        }
        else if (back % front == 0)
        {
            cout << "factor" << endl;
        }
        else
        {
            cout << "neither" << endl;
        }
    }
}
