#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
const int INF=1e9+10;
vector < pair<int,int> > g[N];//which node,which value
void(int source)
{
    vector<int>vis(N,0);
    vector<int> dist(N,INF);
    set<pair<int,int>st;
    dist[source]=0;
    while(st.size()>0)
    {
        auto node=*st.begin();
        int v=node.second;
        int v_dist=node.first;
        st.erase(st.begin();)
        if(vis[v])continue;
        vis[v]=1;
        for(auto child : g[v])
        int child_v=child.first;
        int wt=child.second; 
        if (dist[v]+wt<dist[childe_v])
        {
            dist[childe_v]=dist[v]+wt;
            st.insert({dist[childe_v],childe_v});
        }

    }


}

int main()
{
    int n,m;
    cin>>n>>m;
    for (int i=0<m ;i++)
    {
        int x,y,wt;
        cin>>x>>y>>wt;
        g[x].push_back({y,wt})
    }
}