// Project4.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>
#include <sstream>

using namespace std;


struct list
{
    list* left = NULL;
    list* right = NULL;

    char s = NULL;
};

void addList(list*& added, char c)
{
    list* temp = new list;
    temp->s = c;
    
    temp->right = added->right;
    added->right->left = temp;
    temp->left = added;
    added->right = temp;


    added = temp; //커서를 자신으로 옮김

    

}

void deleteList(list*& deleted, list*& cur)
{

    if (deleted->left != NULL)
    {
        deleted->left->right = deleted->right;
        deleted->right->left = deleted->left;

        deleted = deleted->left;

    }
   

}

void leftCur(list*& cur)
{
    if (cur->left == NULL)
    {
        // 무시
    }
    else
    {
        cur = cur->left;
    }
}
void rightCur(list*& cur)
{
    if (cur->right->right == NULL)
    {
        // 무시
    }
    else
    {
        cur = cur->right;
    }
}

void show(list* head, list* tail)
{
    list* iterlist = head->right;
    while (true)
    {
        if (iterlist != tail)
        {
            cout << iterlist->s;

            iterlist = iterlist->right;
        }
        else
        {
            break;
        }


    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);


    string str;
    cin >> str;


    list* head = new list;
    list* tail = new list;

    head->left = NULL;
    head->right = tail;


    tail->left = head;
    tail->right = NULL;


    list* currentList = new list;
    currentList = head;

    for (int i = 0; i < str.length(); i++)
    {
        addList(currentList, str[i]);
    }



    


    int count;
    cin >> count;
    cin.ignore();

    for (int i = 0; i < count; i++)
    {
        string comand;
        getline(cin, comand);

        istringstream ss(comand);

        char temp;
        ss >> temp;
        
        if (temp == 'L')
        {
            leftCur(currentList);
        }
        else if (temp == 'D')
        {
            rightCur(currentList);
        }
        else if (temp == 'B')
        {
            deleteList(currentList, currentList);
        }
        else if(temp == 'P')
        {
            char temp2;
            ss >> temp2;
            addList(currentList, temp2);

        }

    }

    show(head, tail);
    



  
   
   
}


