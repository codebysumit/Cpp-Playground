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
#define ff frist
#define ss second
#define setBit(x) builtin_popcount(x)


signed main(){
  priority_queue<int, vector<int>, greater<int>> pq;
  
  pq.push(2);
  pq.push(3);
  pq.push(1);
  
  cout<<pq.top()<<endl;
  pq.pop();
  cout<<pq.top()<<endl;
  
  return 0;
}