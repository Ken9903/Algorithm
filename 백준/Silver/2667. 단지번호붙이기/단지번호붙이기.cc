/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>


using namespace std;

void homeDef(int &sum, vector<vector<bool>> home_vec, vector<vector<bool>> & check_vec,int i, int j, int n)
{
    sum++;
    if(i != 0)
    {
        if(check_vec[i - 1][j] == 1) //위
        {
            check_vec[i - 1][j] = 0;
            homeDef(sum, home_vec,check_vec,i -1 ,j,n);
        }
    }
    if(i != n -1)
    {
        if(check_vec[i + 1][j] == 1) //아래
        {
            check_vec[i+1][j] = 0;
            homeDef(sum, home_vec,check_vec,i + 1 ,j,n);
        }
    }
    if(j != 0)
    {
        if(check_vec[i][j - 1] == 1) //위
        {
            check_vec[i][j - 1] = 0;
            homeDef(sum, home_vec,check_vec,i ,j - 1,n);
        }
    }
    if(j != n -1)
    {
        if(check_vec[i][j + 1] == 1) //아래
        {
            check_vec[i][j + 1] = 0;
            homeDef(sum, home_vec,check_vec,i ,j + 1,n);
        }
    }
}

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    
    vector<vector<bool>> home_vec;
    vector<vector<bool>> check_vec;
    vector<int> result;
    
    for(int i = 0; i <n; i++)
    {
 
        vector<bool> temp_vec;
        for(int j = 0; j < n; j++)
        {
            int temp;
            scanf("%1d", &temp);
            
            temp_vec.emplace_back(temp);
        }
        home_vec.emplace_back(temp_vec);
        check_vec.emplace_back(temp_vec);
    }
    
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(check_vec[i][j] == 1)
            {
                int sum = 0;
                check_vec[i][j] = 0;
                homeDef(sum, home_vec,check_vec,i ,j,n);
                result.emplace_back(sum);
            }
        }

    }
    
    cout << result.size() << '\n';
    sort(result.begin(),result.end());
    for(int i = 0; i < result.size(); i++)
    {
        cout << result[i] <<'\n';
    }
    
    

    return 0;
}
