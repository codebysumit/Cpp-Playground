#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<string>
using namespace std;

// #define int long long
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
#define setBit(x) builtin_popcount(x)

signed main(){
  
  int k;
  cin >> k;
  
  vector<vector<int>> a(k);
  
  rep(i,0,k){
    int size; cin>>size;
    a[i]=vector<int>(size);
    
    rep(j,0,size){
      cin>>a[i][j];
    }
  }
  
    vector<int> idx(k, 0);
    
    priority_queue<pii, vector<pii>, greater<pii>> pq;

    rep(i,0,k){
      pq.push({a[i][0], i});
    }
    vi ans;
    
    while(!pq.empty()){
      pii x=pq.top();
      pq.pop();
      
      ans.push_back(x.ff);
      
      if(idx[x.ss]+1<a[x.ss].size()){
         pq.push({a[x.ss][idx[x.ss]+1], x.ss});
      }
      idx[x.ss]+=1;
    }
    
  rep(i,0,ans.size()){
    cout<<ans[i]<<" ";
  }
  cout<<endl;
  
  return 0;
}

// 3
// 3 1 4 6
// 2 2 3
// 3 5 6 7

// push= O(log n)
// pop= O(log n)
// top= O(1)
// size= O(1)