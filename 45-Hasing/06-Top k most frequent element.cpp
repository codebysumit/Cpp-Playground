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
  int n,k;
  cin>>n>>k;
  
  vi a(n);
  
  rep(i,0,n){
    cin>>a[i];
  }
  
  map<int, int> freq;
  
  rep(i,0,n){
    int presentSize=freq.size();
    if(freq[a[i]]==0 && presentSize==k){
      break;
    }
    
    freq[a[i]]++;
  }
  
  vii ans;
  
  map<int,int> :: iterator it;
  for(it=freq.begin(); it!=freq.end();it++){
    if(it->ss!=0){
      ans.push_back({it->ss, it->ff});
    }
  }
  
  sort(ans.begin(), ans.end(), greater<pii>());
  
  vii :: iterator it1;
  
  for(it1=ans.begin(); it1!=ans.end();it1++){
    cout<<it1->ss<<" "<<it1->ff<<endl;
  }
  
  
  return 0;
}

// 6 2
// 1 2 2 2 3 1