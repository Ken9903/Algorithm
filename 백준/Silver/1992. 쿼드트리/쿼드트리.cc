#include <iostream>
#include <vector>
#include <string>

using namespace std;

void makeZip(int n,int h, int w, vector<vector<char>> quadTree) //n은 크기
{
    char checkNum = quadTree[h][w];
    bool sucssed = true;
    for (int i = h; i < h + n; i++)
    {
        for (int j = w; j < w + n; j++)
        {
            if (checkNum != quadTree[i][j])
            {
                sucssed = false;
                break;
            }
        }
    }

    if (sucssed == true)
    {
        cout << checkNum;
    }
    else
    {
        //구현 부
        cout << '(';
        makeZip(n / 2, h, w, quadTree);
        makeZip(n / 2, h, w + n / 2, quadTree);
        makeZip(n / 2, h + n / 2, w, quadTree);
        makeZip(n / 2, h + n / 2, w + n / 2, quadTree);

        cout << ')';

    }



}

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    vector<vector<char>> quadTree;

    for (int i = 0; i < n; i++)
    {
        vector<char> tempVec;
        string input;
        getline(cin, input);
        for (int j = 0; j < n; j++)
        {
            tempVec.emplace_back(input[j]);
        }
        quadTree.emplace_back(tempVec);
    }

    /*
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << quadTree[i][j];
        }
        cout << endl;
    }
    */



   makeZip(n, 0, 0, quadTree);

    return 0;
}
