#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+2, MOD = 1e9+7;
bool vis[N];
vector<int> adj[N];

void dsf(int node){
  // pre-order
  vis[node]=1;
  // cout<<node<<" ";
  
  // iterator
  vector<int>:: iterator it;
  
  for (it = adj[node].begin(); it != adj[node].end(); it++) {
    if(vis[*it]);
    else{
      dsf(*it);
    }
  }
  
  // post-order
  cout<<node<<" ";
}

int main(){
  int n,m;
  cin>>n>>m;
  
  for(int i=0; i<=n;i++)
    vis[i]=false;
    
  
  int x,y;
  
  for (int i = 0; i < m; i++) {
    cin>>x>>y;
    adj[x].push_back(y);
    adj[y].push_back(x);
  }
  dsf(1);
  cout << endl;
  return 0;
}

// pre-order
// input:
// 7 7
// 1 2
// 1 3 
// 2 4
// 2 5 
// 2 6 
// 2 7
// 7 3

// Output: 
// 1 2 4 5 6 7 3

// post-order
// 4 5 6 3 7 2 1
