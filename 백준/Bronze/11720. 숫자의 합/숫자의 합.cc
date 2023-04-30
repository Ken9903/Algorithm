
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int count;
    int sum = 0;
    std::cin >> count;

    string number;
    std::cin >> number;

    for (int i = 0; i < count; i++)
    {
        sum += (int)number[i] - 48;
    }
    std::cout << sum;

}