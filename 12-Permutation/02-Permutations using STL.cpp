#include<iostream>
#include<vector>
using namespace std;

int main(){
  int n; cin>>n;
  
  vector<int> v(n);
  vector<vector<int>> ans;
  
  for (auto &i : v) {
    cin>>i;
  }
  
  sort(v.begin(),v.end());
  
  do{
    ans.push_back(v);
  } while(next_permutation(v.begin(),v.end()));
  
  for (auto vec : ans) {
    for (auto i : vec)
      cout<<i<<" ";
    cout<<endl;
  }
  return 0;
}