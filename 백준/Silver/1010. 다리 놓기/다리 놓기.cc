// temp.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    int count= 0;
    cin >> count;
    cin.ignore();

    for (int i = 0; i < count; i++)
    {
        string str;
        getline(cin, str);

        int n, m;

        istringstream ss(str);

        ss >> n >> m;

        int result = 1;

        for (int i = 1; i <= n; i++)
        {
            result *= (m + 1 - i);

                result /= i;
        }

        cout << result << endl;

    }
    
    

}

