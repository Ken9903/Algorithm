#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>


using namespace std;



int main()
{
    string alphabet;
    cin >> alphabet;
    int sum = 0;


        for (int j = 0; j < alphabet.length(); j++)
        {
            if (alphabet[j] == 'c')
            {
                if (j < alphabet.length() - 1 && alphabet[j + 1] == '=') // index오버 검사
                {
                    sum++;
                    j++; //하나 건너뛰기
                }
                else if (j < alphabet.length() - 1 && alphabet[j + 1] == '-')
                {
                    sum++;
                    j++; //하나 건너뛰기
                }
                else
                {
                    sum++;
                }
            }
            else if (alphabet[j] == 'd')
            {
                if (j < alphabet.length() - 2 && alphabet[j + 1] == 'z' && alphabet[j + 2] == '=')
                {
                    sum++;
                    j = j + 2;
                }
                else if (j < alphabet.length() - 1 && alphabet[j + 1] == '-')
                {
                    sum++;
                    j++;
                }
                else
                {
                    sum++;
                }
            }
            else if (alphabet[j] == 'l')
            {
                if (j < alphabet.length() - 1 && alphabet[j + 1] == 'j')
                {
                    sum++;
                    j++;
                }
                else
                {
                    sum++;
                }
            }
            else if (alphabet[j] == 'n')
            {
                if (j < alphabet.length() - 1 && alphabet[j + 1] == 'j')
                {
                    sum++;
                    j++;
                }
                else
                {
                    sum++;
                }
            }
            else if (alphabet[j] == 's')
            {
                if (j < alphabet.length() - 1 && alphabet[j + 1] == '=')
                {
                    sum++;
                    j++;
                }
                else
                {
                    sum++;
                }
            }
            else if(alphabet[j] == 'z')
            {
                if (j < alphabet.length() - 1 && alphabet[j + 1] == '=')
                {
                    sum++;
                    j++;
                }
                else
                {
                    sum++;
                }
            }
            else //그 외 모든 알파벳
            {
                sum++;
            }
        }
    

    cout << sum;

    return 0;
}



