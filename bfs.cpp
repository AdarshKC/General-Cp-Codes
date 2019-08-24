#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,e,u,v;
    cin >> n;
    cin >> e;
    vector <int> graph[n+1];
    for (int i = 0; i < e; ++i)
    {
        cin >> u >> v;
        graph[u].push_back(v);
    }
    bool a[n+1]={0};
    for (int i = 1; i <= n; ++i)
    {
        if(!a[i])
        {
            queue<int> q;
            q.push(i);
            while(!q.empty())
            {
                int x=q.front();
                q.pop();
                for(int j=0;j<graph[x].size();j++)
                {
                    if(!a[i])
                    {
                        q.push(graph[x][j]);
                        a[graph[x][j]]=1;
                    }
                }
                cout << x << " ";
            }
        }
    }
}
