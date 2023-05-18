#include <iostream>
#include <vector>
#include <math.h>

using namespace std;


int main()
{
    //입력 부
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<bool> dicimal_vec;

    int m, n;
    cin >> m >> n;

    for (int i = 0; i <= n; i++)
    {
        dicimal_vec.emplace_back(true);
    }
    dicimal_vec[0] = false;
    dicimal_vec[1] = false;

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (dicimal_vec[i] == true)
        {
            int temp = i; // 처음거는 소수
            while (temp + i <=  n) // i의 배수들은 소수아님
            {
                temp += i;
                dicimal_vec[temp] = false;
            }
        }
        else
        {
            //이미 전 수에서 배수검사가 완료 되어 계산 필요 없음.
        }
        
    }

    for (int i = m; i <= n; i++)
    {
        if (dicimal_vec[i] == true)
        {
            cout << i << '\n';
        }
    }


    return 0;
}
