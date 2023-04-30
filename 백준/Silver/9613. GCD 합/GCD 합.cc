// Project12.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

bool compare(pair<int, string> x, pair<int, string> y)
{
    return x.first < y.first;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int count;

    cin >> count;
    cin.ignore();



    for (int i = 0; i < count; i++)
    {
        vector<int> mainVec;
        vector<int> indexVec;
        long long sum = 0;

        int n;
        cin >> n;
        cin.ignore();
        string input;
        getline(cin, input);

        istringstream ss(input);

        for (int i = 0; i < n; i++)
        {
            int temp;
            ss >> temp;
            mainVec.emplace_back(temp);
            indexVec.emplace_back(0);
        }
        sort(mainVec.begin(), mainVec.end()); // 전처리 순열은 정렬된 상태에서만

        indexVec[0] = 1;
        indexVec[1] = 1; // prev_permutation 수행할거기 때문에 마지막 순차로 설정.

        do
        {
            vector<int> calculate;
            for (int i = 0; i < n; i++)
            {
                if (indexVec[i] == 1)
                {
                    calculate.emplace_back(mainVec[i]);
                }
            }

            //연산
            while (true)
            {
                if (calculate[1] % calculate[0] == 0)
                {
                    sum += calculate[0];
                    //cout << calculate[0] << "계산값" << endl;
                    break;
                }
                else
                {
                    int other = calculate[1] % calculate[0];
                    calculate[1] = calculate[0];
                    calculate[0] = other;
                }
            }



        } while (prev_permutation(indexVec.begin(), indexVec.end()));


        cout << sum << '\n';







    }


}

