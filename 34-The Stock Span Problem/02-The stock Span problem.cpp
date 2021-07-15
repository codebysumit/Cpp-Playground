#include<bits/stdc++.h>
using namespace std;
vector<int> stock_span(vector<int> price)
{
  vector<int> ans;
  stack<pair<int, int>> st;
  for (auto price : price) {
    int days=1;
    while(!st.empty() && st.top().first<=price){
      days+=st.top().second;
      st.pop();
    }
    st.push({price, days});
    // st.push(make_pair(price, days));
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