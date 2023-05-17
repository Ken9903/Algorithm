#include <iostream>
#include <vector>

using namespace std;

void draw(vector<vector<short>> &map, int &sum, int i, int j, int h, int w, bool first)
{
    if (map[i][j] == 1)
    {
        if (first == true)
        {
            sum++; // 첫 실행만 sum++
        }
        map[i][j] = 0;

        if (i > 0)
        {
            draw(map, sum, i - 1, j, h, w, false);
        }
        if (i < h - 1)
        {
            draw(map, sum, i + 1, j, h, w, false);
        }
        if (j > 0)
        {
            draw(map, sum, i, j - 1, h, w, false);
        }
        if (j < w - 1)
        {
            draw(map, sum, i, j + 1, h, w, false);
        }
        if (i > 0 && j > 0)
        {
            draw(map, sum, i - 1, j - 1, h, w, false);
        }
        if (i > 0 && j < w - 1)
        {
            draw(map, sum, i - 1, j + 1, h, w, false);
        }
        if (i < h - 1 && j > 0)
        {
            draw(map, sum, i + 1, j - 1, h, w, false);
        }
        if (i < h - 1 && j < w - 1)
        {
            draw(map, sum, i + 1, j + 1, h, w, false);
        }
    }
    else
    {
        return;
    }
}

int main()
{
    //입력 부
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    while (true)
    {
        int w, h;
        cin >> w >> h;
        if (w == 0 && h == 0)
        {
            break;
        }

        vector<vector<short>> map;
        for (int i = 0; i < h; i++)
        {
            vector<short> temp;
            for (int j = 0; j < w; j++)
            {
                int input;
                cin >> input;

                temp.emplace_back(input);
            }
            map.emplace_back(temp);
        }

        //알고리즘
        int sum = 0;
        for (int i = 0; i < h; i++) //출력 부
        {
            for (int j = 0; j < w; j++)
            {
                draw(map, sum, i, j, h, w, true);
            }
        }

        cout << sum << '\n';






        /*
        for (int i = 0; i < h; i++) //출력 부
        {
            for (int j = 0; j < w; j++)
            {
                cout << map[i][j];
            }
            cout << endl;
        }
        */





    }


    return 0;
}
