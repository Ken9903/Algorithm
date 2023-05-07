#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>

using namespace std;

void initQue(deque<int>& circleQue, int n)
{
    for (int i = 1; i <= n; i++)
    {
        circleQue.push_back(i);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    deque<int> circleQue;

    initQue(circleQue, n);

    int sum = 0;
    
    for (int i = 0; i < m; i++)
    {
        int obj;
        cin >> obj;
        deque<int>::iterator iter;
        iter = find(circleQue.begin(), circleQue.end(), obj);

        int right = iter - circleQue.begin() ;
        //cout << right;
        int left = circleQue.end() - iter;
        //cout << *circleQue.begin() << endl;
        //cout << left << endl;
        if (right <= left)
        {
           // cout << *circleQue.begin();

            sum += right; //총 right만큼 연산
            for (int j = 0; j < right; j++)
            {
                circleQue.push_back(circleQue.front());
                circleQue.pop_front();
            }
            circleQue.pop_front();

            //cout << *circleQue.begin() << "right 연산" << endl;

        }
        else
        {
            sum += left;
            for (int j = 0; j < left; j++)
            {
                circleQue.push_front(circleQue.back());
                circleQue.pop_back();
            }
            circleQue.pop_front();
            //cout << *circleQue.begin() << "left 연산" << endl;
        }
        
    }

    cout << sum;

    




}


