#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string input;
    getline(cin , input);
    
    vector<short> arr;
    for(int i =0; i < input.length();i++)
    {
        arr.emplace_back(input[i]-48);
    }
    
    sort(arr.begin(),arr.end(), greater<short>());
    
    for(int i= 0; i < arr.size(); i++)
    {
        cout << arr[i];
    }

    return 0;
}
