// Project12.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <utility>
#include <algorithm>
#include <deque>

using namespace std;





int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);


    int channel;
    cin >> channel;

    int brokenNum;
    cin >> brokenNum;

    int onlypm = channel - 100;
    if (channel - 100 > 0)
    {
        onlypm = channel - 100;
    }
    else
    {
        onlypm = 100 - channel;
    }

    if (brokenNum == 0)
    {
        int chennelSize = to_string(channel).length();
        if (chennelSize >= onlypm)
        {
            cout << onlypm;
        }
        else
        {
            cout << chennelSize;
        }
        return 0;
    }

   

    cin.ignore();

    string brokenInput;
    getline(cin, brokenInput);
    istringstream ss(brokenInput);

    vector<char> brokenVec; // 고장난 버튼 리스트

    if (brokenNum == 10)
    {
        if (channel - 100 > 0)
        {
            cout << channel - 100;
            return 0;
        }
        else
        {
            cout << 100 - channel;
            return 0;
        }
    }




 










    for (int i = 0; i < brokenNum; i++)
    {
        char temp;
        ss >> temp;
        brokenVec.emplace_back(temp);
    }



    int plusChannel = channel;
    int plusCount = to_string(channel).length();
    while (plusCount < onlypm)
    {
        bool suc = true;
        string currentC = to_string(plusChannel);
        //cout << currentC;
        for (int i = 0; i < currentC.length(); i++)
        {
            if (find(brokenVec.begin(), brokenVec.end(), currentC[i]) != brokenVec.end())
            {
                plusChannel++;
                if (currentC.length() != to_string(plusChannel).length())
                {
                    plusCount++;
                }
                plusCount++;
                suc = false;
                break;
            }
        }
        if (suc == true)
        {
            break;
        }
        
    }


    int minusChannel = channel;
    int minusCount = to_string(channel).length();
    //cout << minusCount;
    while (minusCount < onlypm)
    {
        if (minusChannel == 0)
        {
            if (find(brokenVec.begin(), brokenVec.end(), char('0')) != brokenVec.end())
            {
                minusCount = 1000000;
               // cout << "inf";
                break;
            }
            break;
        }
        bool suc = true;
        string currentC = to_string(minusChannel);
        //cout << currentC;
        for (int i = 0; i < currentC.length(); i++)
        {
            if (find(brokenVec.begin(), brokenVec.end(), currentC[i]) != brokenVec.end())
            {
                minusChannel--;
                if (currentC.length() != to_string(minusChannel).length())
                {
                    minusCount--;
                }
                minusCount++;
                suc = false;
                break;
            }                  
        }
        if (suc == true)
        {
            //cout << minusChannel << "나성공" << endl;
            break;
        }

    }

    vector<int> arr;
    arr.emplace_back(minusCount);
    arr.emplace_back(plusCount);
    arr.emplace_back(onlypm);

    cout << *min_element(arr.begin(), arr.end());


   
    






 


}

