

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cin >> a;
    cin >> b;
    cin >> c;
  

    if (a == 60 && b == 60 && c == 60)
    {
        cout << "Equilateral" << endl;
    }
    else if (a + b + c == 180 && (a == b || b == c || a == c))
    {
        cout << "Isosceles" << endl;
    }
    else if (a + b + c == 180)
    {
        cout << "Scalene" << endl;
    }
    else
    {
        cout << "Error" << endl;
    }

  

}
