// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int partial_asc(int (&arr)[], vector<int> v, int n)
{
    if(n == v.size() - 1)
    {
        return arr[n];
    }
    else if(arr[n] == -1)
    {
        int max = 0;
        for(int i = n + 1; i < v.size(); i++)
        {
            if(v[i] > v[n])
            {
                int temp = partial_asc(arr, v, i);
                if(temp > max)
                {
                    max = temp;
                }
            }
        }
        if(max == 0)
        {
            arr[n] = v[n];
            return arr[n];
        }
        arr[n] = max + v[n];
        return arr[n];
    }
    else
    {
        return arr[n];
    }
}


int main() {
   int arr[1000];
   fill_n(arr,1000,-1);
   
   int n;
   cin >> n;
   
   vector<int> v;
   for(int i = 0; i < n; i++)
   {
       int temp;
       cin >> temp;
       v.emplace_back(temp);
   }
   
   arr[n - 1] = v[n - 1];
   
   
   int max = 0;
   for(int i = 0; i < n; i++)
   {
       int temp = partial_asc(arr,v,i);
       if(temp > max)
       {
           max = temp;
       }
   }
   
   cout << max;
   

    return 0;
}