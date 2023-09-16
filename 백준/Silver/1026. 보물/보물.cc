#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;




int main()
{
    int n;
    cin >> n;

    vector<int> aArr;
    vector<int> changeaArr;
    vector<int> bArr;
    vector<int> changebArr;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        aArr.emplace_back(temp);
        changeaArr.emplace_back(temp);
    }
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        bArr.emplace_back(temp);
        changebArr.emplace_back(temp);
    }


    for (int i = 0; i < n; i++)
    {
        int maxIndex = max_element(changebArr.begin(), changebArr.end()) - changebArr.begin();
        changebArr[maxIndex] = -1;
        int minIndex = min_element(changeaArr.begin(), changeaArr.end()) - changeaArr.begin();
        changeaArr[minIndex] = 101;
        swap(changeaArr[minIndex], changeaArr[maxIndex]);
        swap(aArr[minIndex], aArr[maxIndex]);
        //cout << minIndex << " " << maxIndex << " 체인지" << '\n';
    }

    int result = 0;
    for (int i = 0; i < n; i++)
    {
        //cout << "결과 " << aArr[i];
        result += aArr[i] * bArr[i];
    }

    cout << result;

    return 0;
}



