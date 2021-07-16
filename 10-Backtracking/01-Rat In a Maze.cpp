#include<iostream>
using namespace std;

bool isSafe(int** arr, int row, int col, int m, int n){
  if(row<m&&col<n&&arr[row][col]==1){
    return true;
  }
  return false;
}

bool ratInMaze(int** arr, int row, int col, int m, int n, int** solArr){
  if((row==(m-1))&&(col==(n-1))){
    solArr[row][col]=1;
    return true;
  }
  
  if(isSafe(arr, row, col, m, n)){
    solArr[row][col]=1;
    
    if(ratInMaze(arr, row+1, col, m, n, solArr)){
      return true;
    }
    
    if(ratInMaze(arr, row, col+1, m, n, solArr)){
      return true;
    }
    
    solArr[row][col]=0;  // Backtracking
    return false;
  }
  
  return false;
}
int main(){
  int m,n;
  cin>>m>>n;
  
  // problem array
  int** arr= new int*[m];
  for (int i = 0; i < n; i++) {
    arr[i]=new int[n];
  }
  
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cin>>arr[i][j];
    }
  }
  
  // solutions array
  int** solArr= new int*[m];
  for (int i = 0; i < n; i++) {
    solArr[i]=new int[n];
    
    for (int j = 0; j < m; j++) {
      solArr[i][j]=0;
    }
  }
  
/*  
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      solArr[i][j]=0;
    }
  }
*/
  
  cout<<endl;
  if(ratInMaze(arr, 0, 0, m, n, solArr)){
    for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
        cout<<solArr[i][j];
      }
      cout<<endl;
    }
  }
  
  for(int i=0;i<m;i++)
    delete [] arr[i];
  delete [] arr;
  
  for(int i=0;i<m;i++)
    delete [] solArr[i];
  delete [] solArr;
  
  // 5 5
  // 1 0 1 0 1
  // 1 1 1 1 1
  // 0 1 0 1 0
  // 1 0 0 1 1
  // 1 1 1 0 1
  
  return 0;
}