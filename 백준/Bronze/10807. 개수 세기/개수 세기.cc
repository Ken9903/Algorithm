#include <iostream>
#include <string>
#include <vector>
#include<sstream>
#include <algorithm>

using namespace std;

int main()
{
    int count;
    cin >> count;
    
    string num_arr;
    cin.ignore();
    getline(cin,num_arr);
    
    
    string find;
    cin >> find;
    
    int num = 0;
    
    istringstream ss(num_arr);
    string strbuffer;

    
    vector<string> num_arr_vec;
    num_arr_vec.clear();
    
    while(ss >> strbuffer)
    {
        num_arr_vec.push_back(strbuffer);
        if(strbuffer == find)
        {
            num++;
        }
    }
    
    cout << num;

    //int reslt = find(num_arr_vec.begin(), num_arr_vec.end(), find);
    

    return 0;
}