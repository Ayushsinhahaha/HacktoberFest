#include<bits/stdc++.h>
using namespace std;
void dfs(int s, vector<int>& v,vector<vector<int>>& adj)
{
  v[s]=1;
  for(auto x: adj[s])
  {
    if(!v[x])
    {
      dfs(x,v,adj);
    }
  }
}
int main(){
  int n;
  cin>>n;
  vector<vector<int>> adj(n,vector<int>());
  vector<vector<int>> edges={{1,2},{2,3},{4,5},{5,6}};
  for(auto x: edges)
  {
    adj[x.first].push_back(x.second);
    adj[x.second].push_back(x.first);
  }
  vector<int> visited(n,0);
  dfs(0,visited,dfs);
}
