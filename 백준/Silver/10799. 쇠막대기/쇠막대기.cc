// Project10.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <string>
#include <sstream>
using namespace std;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);


    string input;
    getline(cin, input);

    vector<int> laserIndex;

    vector<int> startIndex;

    vector<pair<int, int>>  stick;

    int sum = 0;

    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] == '(' && input[i + 1] == ')')
        {
            //레이저 
            laserIndex.push_back(i);
            i++; // 두개 동시에 처리기 때문에 하나 건너뛰기.
            continue;
        }

        if (input[i] == '(')
        {
            startIndex.push_back(i);
        }
        else
        {
            pair<int, int> tempPair;
            tempPair.first = startIndex.back();
            startIndex.pop_back();

            tempPair.second = i;

            stick.push_back(tempPair);
        }
    }

    for (int i = 0; i < stick.size(); i++)
    {
        sum++; //stick 갯수만큼 ++해주기 왜나하면 첫 자르는 것은 2개가 되기 때문

        int first, last;
        first = stick[i].first;
        last = stick[i].second;
        for (int j = 0; j < laserIndex.size(); j++)
        {
            if (laserIndex[j] > first && laserIndex[j] < last)
            {
                sum++;
            }
        }
        
    }

    cout << sum;

    /*
    //현재 생황 표시
    for (int i = 0; i < stick.size(); i++)
    {
        cout << stick[i].first << " " << stick[i].second << endl;
    }

    for (int i = 0; i < laserIndex.size(); i++)
    {
        cout << laserIndex[i] << endl;
    }
    */
    



       



}


