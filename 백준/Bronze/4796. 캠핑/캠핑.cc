// Project12.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>
#include <sstream>

using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int count = 1;

    while (true)
    {
        string input;
        getline(cin, input);

        istringstream ss(input);

        int l, p, v;

        ss >> l >> p >> v;

        if (l == 0 && p == 0 && v == 0)
        {
            return 0;
        }
        else
        {
            int mul;
            int other;

            mul = v / p;
            other = v % p;

            int sum = 0;

            if (other <= l)
            {
                sum += other;
            }
            else
            {
                sum += l;
            }

            sum += l * mul;

            cout << "Case "<< count << ": " << sum << '\n';
            count++;





        }
    }
}

