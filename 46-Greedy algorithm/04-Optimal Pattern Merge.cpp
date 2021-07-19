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

#define int long long
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
#define setBit(x) builtin_popcount(x)

bool compear(pii p1, pii p2){
  double v1=(double)p1.ff/p1.ss;
  double v2=(double)p2.ff/p2.ss;
  return v1>v2;
}

signed main(){
  int n;
  cin>>n;
  
  vi a(n);
  
  rep(i,0,n){
    cin>>a[i];
  }
  
  
  return 0; 
}