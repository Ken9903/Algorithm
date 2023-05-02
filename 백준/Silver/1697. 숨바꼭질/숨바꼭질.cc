/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue> 


using namespace std;

    bool visited[100001];

void find(queue<int> myQueue, int k, int &sum)
{

   int size = myQueue.size();
   for(int i = 0; i < size; i++)
   {
      int n = myQueue.front();
      myQueue.pop();
    
    if(n == k)
    {
        cout << sum;
        return;
    }
    else if(visited[n] == false)
    {
        visited[n] = true;
        if(n != 0 && n * 2 <= 100000)
        {
            myQueue.push(n * 2);
        }
        if(n > 0)
        {
             myQueue.push(n - 1);
        }
        if(n+1 <= 100000)
        {
            myQueue.push(n + 1);
        }
        
        
        
    }
   }
   sum++;
find(myQueue,k,sum);
    
}

int main()
{
    int n, k;
    cin >> n >> k;
    
    fill_n(visited,100001,false);
    
    
    int min;
    queue<int> myQueue;

    if(n > k)
    {
        cout << n-k;
    }
    else
    {
        int sum = 0;
        myQueue.push(n);
        find(myQueue,k,sum);
        
    }


    return 0;
}
