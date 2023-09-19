#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>


using namespace std;

void dfs(vector<vector<int>> graph, vector<bool>& visit, int startPoint)
{
    visit[startPoint] = 1;
    for (int i = 0; i < graph[startPoint].size(); i++)
    {
        if (visit[graph[startPoint][i]] == 0)
        {
            dfs(graph, visit, graph[startPoint][i]);
        }
    }
}

int main()
{
    int n;
    int t;
    cin >> n >> t;

    vector<vector<int>> graph(n + 1);//컴퓨터가 1번부터 시작 0번은 허수.
    vector<bool> visit(n + 1, 0);

    for (int i = 0; i < t; i++)
    {
        int first, second;
        cin >> first >> second;

        graph[first].emplace_back(second);
        graph[second].emplace_back(first);
    }

    dfs(graph, visit, 1);

    cout << accumulate(visit.begin(), visit.end(), 0) - 1;

    

    return 0;
}



