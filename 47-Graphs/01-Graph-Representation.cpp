#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<set>
#include<map>
#include<unordered_map>
#include<string>
#include<climits>
#include<stack>
using namespace std;

// #define int long long
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
#define setBit(x) builtin_popcount(x)

const int N = 1e5+2, MOD = 1e9+7;

vi adj[N];

signed main(){
  int n,m;
  cin>>n>>m;
  
  vvi adjm(n+1, vi(n+1, 0));
  
  //case 1
  rep(i,0,m){
    int x,y;
    cin>>x>>y;
    adjm[x][y]=1;
    adjm[y][x]=1;
  }
  
  cout<<"adjacency matrix of above graph given by: "<<endl;
  
  rep(i,1,n+1){
    rep(j,1,n+1){
      cout<<adjm[i][j]<<" ";
    }
    cout<<endl;
  }
  
  // case 2
  if(adjm[3][7]==1){
    cout<<"There is a edge between 3 and 7"<<endl;
  }
  else{
    cout<<"no edge"<<endl;
  }
  
  // cass 3
  cout<<endl<<endl;
  rep(i,0,m){
    int x,y;
    cin>>x>>y;
    
    adj[x].push_back(y);
    adj[y].push_back(x);
  }
  cout<<"adjacency list of the above graph is given by: "<<endl;
  
  rep(i,1,n+1){
    cout<<i<<" -> ";
    // vector<int> :: iterator it;
    // for(it=adj[i].begin(),it!=adj[i].end();it++)
    //   cout<<*it<<" ";
    for(int x: adj[i]){
      cout<<x<<" ";
    }
    cout<<endl;
  }
  
  return 0; 
}

// frist case:-
// input:
// 7 7
// 1 2
// 1 3 
// 2 4
// 2 5 
// 2 6 
// 2 7
// 7 3

// output:
// adjacency matrix of above graph given by:
// 0 1 1 0 0 0 0
// 1 0 0 1 1 1 1
// 1 0 0 0 0 0 1
// 0 1 0 0 0 0 0
// 0 1 0 0 0 0 0
// 0 1 0 0 0 0 0
// 0 1 1 0 0 0 0

// case 2
// output:
// There is a edge between 3 and 7

// case 3
// input: 
// 1 2
// 1 3
// 2 4
// 2 5
// 2 6
// 2 7
// 7 3
// adjacency list of the above graph is given by:
// 1 -> 2 3
// 2 -> 1 4 5 6 7
// 3 -> 1 7
// 4 -> 2
// 5 -> 2
// 6 -> 2
// 7 -> 2 3
