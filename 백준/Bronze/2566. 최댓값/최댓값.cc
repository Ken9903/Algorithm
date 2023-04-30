

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    int max = 0;
    int horizontal_index;
    int vertical_max[9];
    int vertical_index[9];

    string arr[9];

    for (int i = 0; i < 9; i++)
    {
        getline(cin, arr[i]);
    }
    

    
    for (int i = 0; i < 9; i++)
    {
        vector<int> vertical_vec;
        istringstream ss(arr[i]);
        for (int j = 0; j < 9; j++)
        {
            int temp;
            ss >> temp;
            vertical_vec.push_back(temp);
        }
        vertical_max[i] = *max_element(vertical_vec.begin(), vertical_vec.end());      
        vertical_index[i] = max_element(vertical_vec.begin(), vertical_vec.end()) - vertical_vec.begin();    
    }

    vector<int> horizontal_vec;
    for (int i = 0; i < 9; i++)
    {
        horizontal_vec.push_back(vertical_max[i]);
    }
    max = *max_element(horizontal_vec.begin(), horizontal_vec.end());
    horizontal_index = max_element(horizontal_vec.begin(), horizontal_vec.end()) - horizontal_vec.begin();

    cout << max << endl;
    cout << horizontal_index + 1 << " " << vertical_index[horizontal_index] + 1;
}
