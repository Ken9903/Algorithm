#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int count_Dot(string input, int &startPoint) 
{
    int length = 0;
    for (int i = startPoint; i < input.length(); i++)
    {
        if (input[i] == '.') // length 0이면 0리턴
        {
            //cout << length;
            return length;
        }
        else
        {
            startPoint = i + 1;
            length++;
        }
    }
    //cout << length;
    return length;
}


int main()
{
    string input;
    cin >> input;
    // 0 4 2 6

    for (int i = 0; i < input.length(); i++)
    {
        int count = 0;
        count = count_Dot(input, i);

        //cout << count;
        if (count == 2)
        {
            input[i - count] = 'B';
            input[i - count + 1] = 'B';
        }
        else if (count % 2 == 0)
        {
            if (count % 4 == 0)
            {
                for (int j = i - count; j < i; j++)
                {
                    input[j] = 'A';
                }
            }
            else
            {
                for (int j = i - count; j < i - 2; j++)
                {
                    //cout << j;
                    //cout << "A4개 변환";
                    input[j] = 'A';
                }
                input[i - 2] = 'B';
                input[i - 1] = 'B';
            }
        }
        else
        {
            cout << -1;
            return 0 ;
        }

    }

    cout << input;


    return 0;
}



