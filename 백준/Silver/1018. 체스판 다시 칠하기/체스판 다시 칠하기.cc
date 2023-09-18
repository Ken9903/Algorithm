#include <iostream>
#include <vector>
#include <string>
#include <istream>

using namespace std;

vector<vector<char>> board;
vector<vector<int>> board_score;
vector<vector<bool>> check;

void change_Board(char pre, int cur_n, int cur_m, int n, int m)
{
    if (cur_n < n && cur_m < m) //경계밖
    {
        //cout << "경계";
        if (check[cur_n][cur_m] == false) //체크했나?
        {
            //cout << "체크";
            check[cur_n][cur_m] = true;
            if (pre == board[cur_n][cur_m])
            {
                board_score[cur_n][cur_m] = 1;
            }

            char cur;
            if (pre == 'B')
            {
                cur = 'W';
            }
            else
            {
                cur = 'B';
            }
            change_Board(cur, cur_n + 1, cur_m, n, m);
            change_Board(cur, cur_n, cur_m + 1, n, m);

        }

    }

}

void init(int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            board_score[i][j] = 0;
            check[i][j] = false;
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    cin.ignore();


    for (int i = 0; i < n; i++)
    {
        vector<char> tempVec;
        vector<int> scoreVec;
        vector<bool> tempCheck;

         string temp;
         getline(cin, temp);
          
         for (int z = 0; z < temp.length(); z++)
         {
             tempVec.emplace_back(temp[z]);
             scoreVec.emplace_back(0);
             tempCheck.emplace_back(false);
         }
     
         board.emplace_back(tempVec);
         board_score.emplace_back(scoreVec);
         check.emplace_back(tempCheck);
    }


    int min = 50000;
    //첫 블랙
    change_Board('W', 0, 0, n, m);

    /*
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << board_score[i][j];
        }
        cout << '\n';
    }
    */
    



    for (int i = 0; i < n - 7; i++)
    {
        for (int j = 0; j < m - 7; j++)
        {
            int sum = 0;
            for (int z = i; z < i + 8; z++)
            {
                for (int k = j; k < j + 8; k++)
                {
                    sum += board_score[z][k];
                }
            }
            if (sum < min)
            {
                min = sum;
            }
        }
    }

    init(n, m);
    //첫 화이트
    change_Board('B', 0, 0, n, m);



    
    for (int i = 0; i < n - 7; i++)
    {
        for (int j = 0; j < m - 7; j++)
        {
            int sum = 0;
            for (int z = i; z < i + 8; z++)
            {
                for (int k = j; k < j + 8; k++)
                {
                    sum += board_score[z][k];
                }
            }
            if (sum < min)
            {
                min = sum;
            }
        }
    }

    
    cout << min;

}




