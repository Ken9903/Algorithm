// Project12.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

bool compare(pair<int, int> x, pair<int, int> y)
{
    if (x.second == y.second)
    {
        return x.first < y.first;
    }
    return x.second < y.second;
   
 
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int count;

    cin >> count;
    cin.ignore();

    vector<pair<int, int>> time;
    vector<pair<int, int>> fixTime;


  
    for (int i = 0; i < count; i++)
    {
        string input;
        getline(cin, input);

        istringstream ss(input);

        int start, end;

        ss >> start >> end;

        pair<int, int> temp;
        temp.first = start;
        temp.second = end;

        time.emplace_back(temp);       
    }

    sort(time.begin(), time.end(), compare);

    //time.erase(unique(time.begin(), time.end()), time.end());
    
    

    fixTime.emplace_back(time[0]);

    for (int i = 1; i < time.size(); i++)
    {
        int compatible = true;
        for (int j = 0; j < fixTime.size(); j++)
        {
            if (time[i].first >= fixTime[j].second)
            {
                //fixTime.emplace_back(time[i]);
            }
            else
            {
                compatible = false;
                break;
            }
        }
        if (compatible == true)
        {
            fixTime.emplace_back(time[i]);
        }
    }

    cout << fixTime.size();

    return 0;
    
}

