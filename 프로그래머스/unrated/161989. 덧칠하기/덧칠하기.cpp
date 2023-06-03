#include <string>
#include <vector>
#include <iostream>

using namespace std;
void paint(int &sum,int m, int startPoint,int endPoint, vector<bool> painting)
{
    bool endPaint = true;
    for(int i = startPoint; i <= endPoint; i++)
    {
        if(painting[i] == false)
        {
            startPoint = i;
            endPaint = false;
            break;
        }
    }
    if(endPaint == true)
    {
        return;
    }
    else
    {
        sum++;
        for(int i = startPoint; i < startPoint + m; i++ )
        {
            if(i <= endPoint)
            {
                painting[i] = true;
            }
        }
        if(startPoint + m <= endPoint)
        {
            paint(sum,m, startPoint+m,endPoint,painting);
        }
        
        
    }
    
    
}

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    
    vector<bool> painting(n + 1, true); //0추가
    for(int i = 0; i < section.size(); i++)
    {
        painting[section[i]] = false;
    }
    
    int sum = 0;
    
    

    paint(sum,m, 0,n,painting);
    answer = sum;
    
    cout << answer;
    
    
    return answer;
}