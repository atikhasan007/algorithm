#include<bits/stdc++.h>
using namespace std;
typedef pair<int ,int > pii;
int nodecount, edgecount;
bool vis[1005];
int primsMST(int source,vector<vector<int>>G[1005])
{
    priority_queue <pii, vector<pii>,greater<pii>> pq;
    int res = 0;
    pq.push({source,0});
    while (!pq.empty()){
        auto p = pq.top();
        pq.pop();
        int weight=p.first;
        int u = p.second;
        if(vis[u] == true){
            continue;
        }
        res+=weight;
        vis[u]=true;
        for(auto v : G[u]){
            if(vis[v[0]]==false){
                pq.push({v[1],v[0]});
            }
        }
    }
    return res;
}
int main()
{

    cin >> nodecount>>edgecount;
    memset(vis,false,sizeof(vis));
    vector<vector<int>>G[1005];
    for(int i=1;i<=edgecount;i++){
        int a,b,weight;
        cin >> a >> b >> weight;
        G[a].push_back({b,weight});
        G[b].push_back({a,weight});
    }
    int res = primsMST(0,G);
    cout << res << endl;
}
