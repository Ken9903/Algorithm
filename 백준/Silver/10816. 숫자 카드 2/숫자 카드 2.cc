// Project17.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);		//입출력 시간에 많은 도움을 줌.

    vector<int> nCard;
    vector<int> mCard;
    vector<int> result;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;

        nCard.emplace_back(temp);
    }

    int m;
    cin >> m;

    
    for (int i = 0; i < m; i++)
    {
        int temp;
        cin >> temp;

        mCard.emplace_back(temp);
    }

    sort(nCard.begin(), nCard.end());
 
    vector<int>::iterator iter;
    for (int i = 0; i < m; i++)
    {
        
        
            result.emplace_back(upper_bound(nCard.begin(),nCard.end(), mCard[i]) - lower_bound(nCard.begin(), nCard.end(), mCard[i]));
           
        
    }

    for (int i = 0; i < m; i++)
    {
        cout << result[i] << " ";
    }




    



}

