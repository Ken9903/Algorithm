#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

bool compare(string input1, string input2)
{
    if (input1.length() < input2.length())
    {
        return true;
    }
    else if (input1.length() > input2.length())
    {
        return false;
    }
    else
    {
        if (input1 < input2)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

}


int main()
{
    int n;
    cin >> n;

    vector<string> words;

    for (int i = 0; i < n; i++)
    {
        string temp;
        cin >> temp;
        words.emplace_back(temp);
    }

    sort(words.begin(), words.end(), compare);
    words.erase(unique(words.begin(), words.end()), words.end());

    for (int i = 0; i < words.size(); i++)
    {
        cout << words[i] << '\n';
    }

   
    return 0;
}



