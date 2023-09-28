#include <iostream>
#include <deque>
#include <algorithm>


using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n, m;
        cin >> n >> m;

        deque<int> important;
        deque<bool> target(n, false);
        target[m] = true;

        int sum = 1;

        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;

            important.push_back(temp);
        }
        if (n == 1)
        {
            cout << 1 << '\n';
            continue;
        }
       
    
        while (true)
        {
            int max = *max_element(important.begin(), important.end());
            while (important.front() != max)
            {
                important.push_back(important.front());
                important.pop_front();
                target.push_back(target.front());
                target.pop_front();
                //cout << important.front() << " " << important.size() << " ";
            }
            if (target.front() == true)
            {
                cout << sum << '\n';
                break;
            }
            else
            {
                important.pop_front();
                target.pop_front();
                sum++;
            }

        }
   




    }
    
    return 0;
}



