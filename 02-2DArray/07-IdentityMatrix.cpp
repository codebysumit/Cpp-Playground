#include "iostream"
using namespace std;
int main(){
  #ifndef SUMIT_DAS
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  
  int n;
  cin>>n;
  
  int arr[n][n];
  
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if(i==j)
        arr[i][j]=1;
      else
        arr[i][j]=0;
    }
  }
  
  
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        cout<<arr[i][j]=1<<" ";
    }
    cout<<endl;
  }
  
  
   return 0;
}