// Project12.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;



int arr[5][5];

vector<int> myVec;

int* sixarr(int myArr[],int startX, int startY,int size)
{
    myArr[size] = arr[startX][startY];
    size++;

    //int* myArr_1 = new int[];
    //int* myArr_2 = new int[];
    //int* myArr_3 = new int[];
    //* myArr_4 = new int[];

    if (size == 6)
    {
        int vecPre = (myArr[0] * 100000) + (myArr[1] * 10000) + (myArr[2] * 1000) + (myArr[3] * 100) + (myArr[4] * 10) + (myArr[5] * 1);
        myVec.emplace_back(vecPre);

        //cout << vecPre << "입력 값" << endl;

        return myArr;
    }
    else
    {
        if (startX > 0)
        {
            sixarr(myArr, startX - 1, startY, size);
        }
        if (startX < 4)
        {
            sixarr(myArr, startX + 1, startY, size);
        }
        if (startY > 0)
        {
            sixarr(myArr, startX, startY - 1, size);
        }
        if (startY < 4)
        {
            sixarr(myArr, startX, startY + 1, size);
        }

        return myArr;
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);


    for (int i = 0; i < 5; i++)
    {
        string input;
        getline(cin, input);

        istringstream ss(input);

        for (int j = 0; j < 5; j++)
        {
            int temp;
            ss >> temp;
            arr[i][j] = temp;
        }
    }

    int newarr[6];


    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            sixarr(newarr, i, j, 0);
        }
    }
    sort(myVec.begin(), myVec.end());
    myVec.erase(unique(myVec.begin(), myVec.end()), myVec.end());

    /* // 벡터 출력함수
    for (int i = 0; i < myVec.size(); i++)
    {
       cout << myVec[i] << endl;
    }
    */

    cout << myVec.size();





    /* //출력함수
    for (int i = 0; i < 5; i++)
    {

        for (int j = 0; j < 5; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    */


   

    






}

