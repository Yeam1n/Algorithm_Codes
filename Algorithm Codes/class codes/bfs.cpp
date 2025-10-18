#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
vector<int> g[N];
int vis[N];
//int level[N];

void bfs(int source) {
    queue<int> q;
    q.push(source);
    vis[source] = 1;
    //level[source] = 0;

    while(!q.empty()) {
        int cur_v = q.front();
        q.pop();
        cout << cur_v << " ";

        for(int child : g[cur_v]) {
            if(!vis[child]) {
                q.push(child);
                vis[child] = 1;
                //level[child] = level[cur_v] + 1;
            }
        }
    }
    cout << endl;
}

int main() {
    int n, m;
    cin >> n >> m;

    for(int i = 0; i < m; ++i) {
        int x, y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    bfs(1);

    return 0;
}
