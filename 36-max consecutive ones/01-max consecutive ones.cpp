#include<bits/stdc++.h>
using namespace std;
int main(){
  int n; cin>>n;
  int k; cin>>k;
  vector<int> a(n);
  for (auto &i : a) {
    cin>>i;
  }
  
  int zerocount=0, i=0, ans=0;
  for (int j = 0; j < n; j++) {
    if(a[j]==0)
      zerocount++;
    while(zerocount>k){
      if(a[i]==0)
        zerocount--;
      i++;
    }
    // zerocount<=k
    ans=max(ans, j-i+1);
  }
  
  cout<<ans<<endl;
  return 0;
}

// 5 2
// 1 1 0 0 1
// ans => 5

// 5 2
// 1 0 0 0 1
// ans => 3