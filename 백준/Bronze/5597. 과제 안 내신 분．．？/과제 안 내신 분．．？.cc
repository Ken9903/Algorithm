/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
bool nextIs(int num)
{
    if(studentNum[num + 1] != studentNum[num] + 1)
    {
        retrun false;
    }
}
*/

int main()
{
    vector<int> studentNum;
    vector<int> arr;
    
    int num1 = 0;
    int num2 = 0;
  for(int i = 0; i < 28; i++)
  {
      int temp;
      cin >> temp;
      studentNum.push_back(temp);
  }
  for(int i= 1; i < 31; i++)
  {
      arr.push_back(i);
  }
  
  sort(studentNum.begin(), studentNum.end());
  
  for(int i = 0; i < 30; i++)
  {
     if(studentNum[i] != arr[i])
     {
         if(num1 == 0)
         {
              num1 = i+1;
              studentNum.insert(studentNum.begin() + i-1, i);
         }
         else
         {
             num2 = i+1;
             break;
         }
         if(studentNum[i + 1] != arr[i + 1])
         {
             //
         }
         else
         {
             i++;
         }
     }
  }
  cout << num1 << " " << num2;
  
  
}
