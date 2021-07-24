#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+2, MOD = 1e9+7;
bool vis[N];
vector<int> adj[N];

int main(){
  int n,m;
  cin>>n>>m;
  int cnt=0;
  
  vector<vector<int>> adj(n);
  vector<int> indeg(n,0);
  
  for (int i = 0; i < m; i++) {
    int x,y;
    cin>>x>>y;
    // x -> y
    adj[x].push_back(y);
    indeg[y]++;
  }
  
  queue<int> pq;
  for (int i = 0; i < n; i++) {
    if(indeg[i]==0){
      pq.push(i);
    }
  }
  
  while(!pq.empty()){
    cnt++;
    int x=pq.front();
    pq.pop();
    cout<<x<<" ";
    // x->y
    for (auto it : adj[x]) {
      indeg[it]--;
      if(indeg[it]==0)
        pq.push(it);
    }
  }
  return 0;
}

// input:
// 4 3
// 0 1
// 1 2
// 2 3

// output:
// 0 1 2 3

// 3 3
// 0 1
// 1 2
// 2 0
