#include <string>
#include <vector>
#include <deque>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers, int target) {
    int answer = 0;
    deque<int> qNum;
    qNum.push_back(0);
    
    for(int i = 0; i < numbers.size(); i++)
    {
        int size = qNum.size();
        for(int j = 0; j < size; j++)
        {
            int temp = qNum.front();
            qNum.pop_front();
            
            qNum.push_back(temp + numbers[i]);
            qNum.push_back(temp - numbers[i]);
        }
    }
    
    answer = count(qNum.begin(), qNum.end(), target);
    return answer;
}