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


    while(true)
    {

        string input;
        getline(cin, input);

        if (cin.eof())
        {
            break;
        }

        int emptyNum = 0;
        int intNum = 0;
        int smallNum = 0;
        int bigNum = 0;
       

        for (int i = 0; i < input.length(); i++)
        {
            if (input[i] == ' ')
            {
                emptyNum++;
            }
            else if ((int)input[i] <= 58)
            {
                intNum++;
            }
            else if (input[i] < 91)
            {
                bigNum++;
            }
            else if (input[i] < 123)
            {
                smallNum++;
            }
        }

        cout << smallNum << " " << bigNum << " " << intNum << " " << emptyNum << '\n';



    }
    return 0;
        
    
    
    



       



}


