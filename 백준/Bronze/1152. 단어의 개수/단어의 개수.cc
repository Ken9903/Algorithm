#include<string>
#include<iostream>

using namespace std;

int main(){
    string input;
    getline(cin, input);
    int sum = 1;
    if(input[0] == ' ')
    {
        sum--;
    }
    if(input[input.length() - 1] == ' ')
    {
        sum--;
    }
    for(int i = 0; i < input.length(); i++)
    {
      
       if(input[i] == ' ')
       {
          sum++;
       }

    }
    cout << sum;
}
