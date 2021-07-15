#include<bits/stdc++.h>
using namespace std;
int main(){
  vector<int> arr={12,3,7,1,6,9};
  int target=24;
  // int target=5;
  
  int n=arr.size();
  bool flag=false;
  
  sort(arr.begin(),arr.end());
  
  for (int i = 0; i < n; i++) {
    int low=i+1, high=n-1;
    while(low<high){
      int current=arr[i]+arr[low]+arr[high];
      if(current==target){
        flag=true;
      }
      if(current<target){
        low++;
      }
      else{
        high--;
      }
    }
  }
  
  if(flag)
    cout << "True" << endl;
  else
    cout << "False" << endl;
  return 0;
}