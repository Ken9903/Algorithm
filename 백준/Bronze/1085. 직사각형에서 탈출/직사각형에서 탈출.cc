

#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string arr;
    getline(cin, arr);
    istringstream ss(arr);

    int x, y, w, h;

    ss >> x >> y >> w >> h;

    vector<int> length;

    length.push_back(x);
    length.push_back(w - x);
    length.push_back(y);
    length.push_back(h - y);

    int max = 0;

    max = *min_element(length.begin(), length.end());

    cout << max;
  

}
