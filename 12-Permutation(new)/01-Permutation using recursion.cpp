#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> ans;

void permute(vector<int> num, int idx){
  if(idx==num.size()){
    ans.push_back(num);
    return;
  }
  
  for (int i=idx;i<num.size();i++) {
    swap(num[i],num[idx]);
    permute(num,idx+1);
    swap(num[i],num[idx]);
  }
}

/*
void permute(vector<int> &num, vector<int> &ans, int idx){
  if(idx==num.size()){
    ans.push_back(num);
    return;
  }
  
  for (int i=idx;i<num.size();i++) {
    swap(num[i],num[idx]);
    permute(num,ans,idx+1);
    swap(num[i],num[idx]);
  }
}
*/

int main(){
  int n; cin>>n;
  vector<int> v(n);
  
  for (auto &i : v) {
    cin>>i;
  }
  
  permute(v,0);
  // permute(a,ans,0);
  
  for (auto vec : ans) {
    for (auto i : vec)
      cout<<i<<" ";
    cout<<endl;
  }
  return 0;
}