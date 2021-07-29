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

const int N=1e5+2, MOD=1e9+7;

int dp[N];

// int fib(int n){
//   if(n==0||n==1)
//     return 0;
//   if(n==2)
//     return 1;
//   if(dp[n]!=-1)
//     return dp[n];
   
//   return fib(n-1)+fib(n-2);
// }

int fib(int n){
  if(n==0||n==1)
    return 0;
  if(n==2)
    return 1;
  if(dp[n]!=-1)
    return dp[n];
   
  dp[n]= fib(n-1)+fib(n-2);
  return dp[n];
}

signed main(){
  int n;
  cin>>n;
  vi dp(n+1);
  
  //case 3
  dp[0]=0;
  dp[1]=0;
  dp[2]=1;
  
  for (int i = 3; i <= n; i++) {
    dp[i]=dp[i-1]+dp[i-2];
  }
  
  std::cout << dp[n] << std::endl;
  
  // cass 2
  // rep(i,0,N){
  //   dp[i]=-1;
  // }
  // std::cout << fib(n) << std::endl;
  
  // case 1
  // std::cout << fib(n) << std::endl;
  return 0; 
}
