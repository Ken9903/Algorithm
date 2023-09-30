#include <iostream>
#include <vector>
#include <deque>
#include <sstream>
#include <string>
#include <algorithm>


using namespace std;

int main()
{
    string input;
    getline(cin, input);
    vector<char> back;
    
    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] == ' ')
        {
            int size = back.size();
            for (int j = 0; j < size; j++)
            {
                cout << back.back();
                back.pop_back();
            }
            cout << ' ';
            continue;
        }
        if (input[i] == '<')
        {
            int size = back.size();
            for (int j = 0; j < size; j++)
            {
                cout << back.back();
                back.pop_back();
            }
            for (int j = i; j < input.length(); j++)
            {
                cout << input[j];
                i++;
                if(input[j] == '>')
                {
                    i--;
                    break;
                }
            }
        }
        else
        {
            back.emplace_back(input[i]);
        }
    }
    int size = back.size();
    for (int j = 0; j < size; j++)
    {
        cout << back.back();
        back.pop_back();
    }
    
    
    return 0;
}



