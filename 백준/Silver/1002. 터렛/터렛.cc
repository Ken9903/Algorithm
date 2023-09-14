#include <iostream>
#include <math.h>


using namespace std;


int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int x1, y1, r1, x2, y2, r2;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

        double distance_circle = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

        if (x1 == x2 && y1 == y2) //같은 점 
        {
            if (r1 == r2)
            {
                cout << -1 << '\n';
                continue;
            }
            else
            {
                cout << 0 << '\n';
                continue;
            }
        }
        if (abs(r1 - r2) > distance_circle) // 내부원
        {
            cout << 0 << '\n';
            continue;
        }
        if (distance_circle > r1 + r2) // 외부 원
        {
            cout << 0 << '\n';
            continue;
        }
        
        if (distance_circle == r2 + r1)
        {
            cout << 1 << '\n';
            continue;
        }
        if (distance_circle + r2 == r1)
        {
            cout << 1 << '\n';
            continue;
        }
        else if (distance_circle + r1 == r2)
        {
            cout << 1 << '\n';
            continue;
        }


        if (distance_circle < r1 + r2)
        {
            cout << 2 << '\n';
            continue;
        }



    }

   
    return 0;
}



