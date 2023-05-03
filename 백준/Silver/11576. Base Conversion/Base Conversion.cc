// Project1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int m;
    cin >> m;

    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        int temp;
        cin >> temp;

        sum += (pow(a,  m - 1 - i) * temp);
    }
    
    vector<int> result;

    while (sum >= b)
    {
        result.emplace_back(sum % b);
        sum = sum / b;
    }
    result.emplace_back(sum % b);

    for (int i = result.size() - 1; i >= 0; i--)
    {
        cout << result[i] << " ";
    }

}
