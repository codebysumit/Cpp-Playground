#include<iostream>
#include<deque>
#include<set>
#include<vector>
#include<iterator>
using namespace std;
int main(){
  
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif // ONLINE_JUDGE
  
  int n,k;
  cin>>n>>k;
  vector<int> a(n);
  for (auto &i : a) {
    cin>>i;
  }
  
  multiset<int,greater<int>> s;
  vector<int> ans;
  for (int i = 0; i < k; i++) {
    s.insert(a[i]);
  }
  
  ans.push_back(*s.begin());
  
  for (int i = k; i < n; i++) {
    s.erase(s.lower_bound(a[i-k]));
    s.insert(a[i]);
    ans.push_back(*s.begin());
  }
  
  for (auto i : ans) {
    cout<<i<<" ";
  }
  // n log n
  
  // 8 3
  // 1 3 -1 -3 5 3 6 7
  return 0;
}