#include<iostream>
using namespace std;

int main(){
  int n1, n2, n3;
  cin>>n1>>n2>>n3;
  
  int m1[n1][n2];
  int m2[n2][n3];
  
  //input m1 matrix
  for (int i = 0; i < n1; i++) {
    for (int j = 0; j < n2; j++) {
      cin>>m1[i][j];
    }
  }
  
  //input m2 matrix
  for (int i = 0; i < n2; i++) {
    for (int j = 0; j < n3; j++) {
      cin>>m2[i][j];
    }
  }
  
  int ans[n1][n3];
  
  //initiation ans all elements in 0
  for (int i = 0; i < n1; i++) {
    for (int j = 0; j < n3; j++) {
      ans[i][j]=0;
    }
  }
  
  //Multiplication m1 and m2 matrix
  for (int i = 0; i < n1; i++) {
    for (int j = 0; j < n3; j++) {
      for (int k = 0; k < n2; k++) {
        ans[i][j]+=m1[i][k]*m2[k][j];
      }
    }
  }
  
  cout<<endl; up
  
 //print ans matrix
 for (int i = 0; i < n1; i++) {
   for (int j = 0; j < n3; j++) {
     cout<<ans[i][j]<<" ";
   }
   cout<<endl;
 }
 
  return 0;
}