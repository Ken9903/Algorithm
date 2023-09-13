#include <iostream>
#include <vector>

using namespace std;

void clockCal(int &cur_hour, int &cur_minuet, int minuet)
{
    if (cur_minuet + minuet >= 60)
    {
        int plusHour = (cur_minuet + minuet) / 60;
        cur_minuet = (cur_minuet + minuet) % 60;

        cur_hour += plusHour;
    }
    else
    {
        cur_minuet += minuet;
    }
    if (cur_hour >= 24)
    {
        cur_hour = cur_hour % 24;
    }
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;


    clockCal(a, b, c);

    cout << a << " " << b;

   
    return 0;
}



