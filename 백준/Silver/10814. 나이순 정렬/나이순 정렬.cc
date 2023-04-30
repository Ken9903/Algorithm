// Project12.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

bool compare(pair<int, string> x, pair<int, string> y)
{
    return x.first < y.first;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int count;

    cin >> count;
    cin.ignore();

    vector<pair<int, string>> input_vec;


  
    for (int i = 0; i < count; i++)
    {
        string input;
        getline(cin, input);

        istringstream ss(input);

        int old;
        string name;

        ss >> old >> name;

        pair<int, string> temp;

        temp.first = old;
        temp.second = name;    

        input_vec.emplace_back(temp);
    }

    stable_sort(input_vec.begin(), input_vec.end(), compare);

    for (int i = 0; i < count; i++)
    {
        cout << input_vec[i].first << " " << input_vec[i].second << "\n";
    }

    
    
}

