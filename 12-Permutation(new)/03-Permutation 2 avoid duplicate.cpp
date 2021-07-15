#include "iostream"
#include "vector"
using namespace std;

void helper(vector<int> num, vector<vector<int>> &ans, int idx){
  if (idx == num.size()) {
    ans.push_back(num);
    return ;
  }
  
  for (int i = idx; i < num.size(); i++) {
    if(i != idx and num[i]==num[idx])
        continue;
    
    swap(num[i], num[idx]);
    helper(num, ans, idx + 1);
  }
}

vector<vector<int>> permute(vector<int> num){
  vector<vector<int>> ans;
  sort(num.begin(),num.end());
  helper(num, ans, 0);
  return ans;
}

int main(){
  
  int n; cin>>n;
  vector<int> v(n);
  
  for (auto &element : v) {
    cin>>element;
  }
  
   vector<vector<int>> res = permute(v);
  // vector<vector<int>> res = permute({1, 2, 3});
  
  for (auto i : res) {
    for (auto vec : i) {
      cout << vec << " ";
    }
    cout << "\n";
  }
  
  return 0;
}