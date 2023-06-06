#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
void dfs(int i, vector<vector<int>>& graph, vector<int>& check, int& order)
{
    for (int j = 0; j < graph[i].size(); j++)
    {
        if (check[graph[i][j]] == 0)
        {
            check[graph[i][j]] = order;
            order++;
            dfs(graph[i][j], graph, check, order);
        }
    }
    return;
}
int main()
{
    int n, m, r;
    cin >> n >> m >> r;

    vector<vector<int>> graph(n + 1);
    vector<int> check(n + 1, 0);
    int order = 1;

    check[r] = order;
    order++;


    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[v].emplace_back(u);
        graph[u].emplace_back(v);
    }

    for (int i = 1; i <= n; i++)
    {
        sort(graph[i].begin(), graph[i].end(), greater<>());
    }

  
        dfs(r, graph, check, order);
    


    for (int i = 1; i <= n; i++)
    {
        cout << check[i] << '\n';
    }




    return 0;
}



