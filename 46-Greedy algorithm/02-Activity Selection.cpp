#include<bits/stdc++.h>
using namespace std;
int main(){
  int n; cin>>n;
  vector<vector<int>> v;
  for (int i = 0; i < n; i++) {
    int start,end;
    cin>>start>>end;
    v.push_back({start,end});
  }
  sort(v.begin(), v.end(), [&](vector<int> &a, vector<int> &b)
  {
    return a[1]<b[1];
  });
  
  int tack=1;
  int end=v[0][1];
  for (int i = 0; i < n; i++) {
    if(v[i][0]>=end){
      tack++;
      end=v[i][1];
    }
  }
  cout<<tack<<endl;
  return 0;
}

// 3
// 10 20
// 12 15
// 20 30