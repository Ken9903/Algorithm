// Project4.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

struct stack
{
    int arr[10000];
    int index = 0;

    void push(int n)
    {
        arr[index] = n;
        index++;
    }
    void pop()
    {
        if (index == 0)
        {
            cout << -1 << '\n';
        }
        else
        {
            cout << arr[index - 1] << '\n';
            index--;
        }

    }
    void size()
    {
        cout << index << '\n';
    }
    void empty()
    {
        if (index == 0)
        {
            cout << 1 << '\n';

        }
        else
        {
            cout << 0 << '\n';
        }
    }
    void top()
    {
        if (index == 0)
        {
            cout << -1 << '\n';
        }
        else
        {
            cout << arr[index - 1] << '\n';
        }
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    stack s;

    int count;
    cin >> count;

    cin.ignore();

    for (int i = 0; i < count; i++)
    {
        string str;
        getline(cin, str);

        if (str.find("push") != -1)
        {
            istringstream ss(str);
            string temp;
            int n;
            ss >> temp >> n;

            s.push(n);
        }
        else if (str == "pop")
        {
            s.pop();
        }
        else if (str == "size")
        {
            s.size();
        }
        else if (str == "empty")
        {
            s.empty();
        }
        else if (str == "top")
        {
            s.top();
        }
    }

}


