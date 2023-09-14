#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

float makeNewAVR(vector<int> const input)
{
    vector<float> newVec;
    
    float maxInput = *max_element(input.begin(), input.end());
    for (int i = 0; i < input.size(); i++)
    {
        newVec.emplace_back(input[i] / maxInput * 100);
    }

    return accumulate(newVec.begin(), newVec.end(), 0.0) / newVec.size();
    
}

int main()
{
    int n;
    cin >> n;

    vector<int> inputVec;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;

        inputVec.emplace_back(temp);
    }
    cout << makeNewAVR(inputVec);
    
   
    return 0;
}



