// temp.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main()
{
    int credit_main = 0;
    float sum = 0;

    float result = 0;


    for (int i = 0; i < 20; i++)
    {
        string subj_str;
        getline(cin, subj_str);

        istringstream ss(subj_str);

        string name;
        float credit;
        string point;

        ss >> name >> credit >> point;

        if (point == "A+")
        {
            credit_main += credit;
            sum += credit * 4.5f;
        }
        else if (point == "A0")
        {
            credit_main += credit;
            sum += credit * 4.0f;
        }
        else if (point == "B+")
        {
            credit_main += credit;
            sum += credit * 3.5f;
        }
        else if (point == "B0")
        {
            credit_main += credit;
            sum += credit * 3.0f;
        }
        else if (point == "C+")
        {
            credit_main += credit;
            sum += credit * 2.5f;
        }
        else if (point == "C0")
        {
            credit_main += credit;
            sum += credit * 2.0f;
        }
        else if (point == "D+")
        {
            credit_main += credit;
            sum += credit * 1.5f;
        }
        else if (point == "D0")
        {
            credit_main += credit;
            sum += credit * 1.0f;
        }
        else if (point == "F")
        {
            credit_main += credit;
           //notting
        }
    }


    result = sum / credit_main;

    cout << result;



    
    

}

