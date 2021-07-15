#include<bits/stdc++.h>
using namespace std;
int main(){
  int arr[]={12,3,7,1,6,9};
  // int target=24;
  int target=5;
  
  int n=sizeof(arr)/sizeof(arr[0]);
  bool flag=false;
  
  for (int i = 0; i < n; i++) {
    for (int j =i+1; j < n; j++) {
      for (int k = j+1; k < n; k++) {
        if(arr[i]+arr[j]+arr[k]==target){
          flag=true;
          cout << flag << endl;
          return 0;
        }
      }
    }
  }
  cout << flag << endl;
  return 0;
}