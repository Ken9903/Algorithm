// Project10.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <string>
#include <sstream>
using namespace std;

bool compare(pair<int, int> x, pair<int, int> y)
{
    if (x.second > y.second)
    {
        return false;
    }
    else if(x.second == y. second)
    {
        if (x.first > y.first)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
    else
    {
        return true;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<pair<int, int>> pos;

    int count;
    cin >> count;

    cin.ignore();

    for (int i = 0; i < count; i++)
    {
        string input;
        getline(cin, input);

        istringstream ss(input);

        int x, y;
        ss >> x >> y;
        pair<int, int> mypair(x, y);

        pos.push_back(mypair);
    }

    sort(pos.begin(), pos.end(), compare);

    for (int i = 0; i < count; i++)
    {
        cout << pos[i].first << " " << pos[i].second << "\n";
    }




}


