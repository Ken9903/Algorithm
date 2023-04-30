// temp.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main()
{
    string peace_arr;
    getline(cin, peace_arr);

    istringstream ss(peace_arr);
    vector<int> peace_vec;
    vector<int> arr;
    
    arr.push_back(1);
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(2);
    arr.push_back(2);
    arr.push_back(8);

    for (int i = 0; i < 6; i++)
    {
        int temp;
        ss >> temp;
        peace_vec.push_back(temp);
    }

    
    cout << arr[0] - peace_vec[0] << " " << arr[1] - peace_vec[1] << " " << arr[2] - peace_vec[2] << " " << arr[3] - peace_vec[3] << " " << arr[4] - peace_vec[4] << " " << arr[5] - peace_vec[5];

    

}

