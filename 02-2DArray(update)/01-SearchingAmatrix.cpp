#include<iostream>
using namespace std;
int main(){
  int n,m;
  cin>>n>>m;
  
  int arr[n][m];
  
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin>>arr[i][j];
    }
  }
  cout<<endl;
  
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
  cout<<endl;
  
  int key;
  cin>>key;
  
  bool flag=false;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if(arr[i][j]==key){
        cout<<i<<" "<<j<<endl;
        flag=true;
      }
    }
  }
  
  if(flag==true){
    cout<<"elements is found\n";
  } else {
    cout<<"elements is not found\n";
  }
  return 0;
}