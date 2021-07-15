#include<bits/stdc++.h>
using namespace std;
vector<int> stock_span(vector<int> a)
{
  vector<int> ans;
  for (int i = 0; i < a.size(); i++) {
  int days=0;
    for (int j = i; j >= 0; j--) {
      if(a[i]>=a[j]){
        days++;
      }
      else{
        break;
      }
    }
    ans.push_back(days);
  }
  return ans;
}

int main(){
  vector<int> a={100,80,60,70,60,75,85};
  for (auto i : a) {
    cout << i << " ";
  }cout<<endl;
  
  vector<int> ans=stock_span(a);
  for (auto i : ans) {
    cout << i << " ";
  }
  return 0;
}