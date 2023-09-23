#include <iostream>
#include <list>
#include <algorithm>


using namespace std;

void shuffle(list<int>& card)
{
    card.pop_front();
    int temp = *card.begin();
    card.pop_front();
    card.push_back(temp);
    //cout << temp;
}

int main()
{
    int n;
    cin >> n;
    list<int> card;
    for (int i = 0; i < n; i++)
    {
        card.emplace_back(i+1);
    }
    list<int>::iterator cur = card.begin();
    if (card.size() == 1)
    {
        cout << *cur;
        return 0;
    }

    while (true)
    {      
            if (card.size() == 2)
            {
                list<int>::iterator cur = card.begin();
                cur++;
                cout << *cur;
                return 0;
            }
            else
            {
                shuffle(card);
            }
        
    }

    return 0;
}



