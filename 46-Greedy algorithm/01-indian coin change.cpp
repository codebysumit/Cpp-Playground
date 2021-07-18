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
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
#define setBit(x) builtin_popcount(x)

signed main(){
  int n;
  cin>>n;
  
  vi a(n);
  
  rep(i,0,n){
    cin>>a[i];
  }
  
  int x;
  cin>>x;
  
  sort(a.begin(),a.end(),greater<int>());
  int ans=0;
  
  for (int i = 0; i < n; i++) {
    ans+=x/a[i];
    x-=x/a[i]*a[i];
  }
  
  cout<<ans<<endl;
  
  return 0; 
}
// 10
// 1 2 5 10 20 50 100 200 500 000
// 350