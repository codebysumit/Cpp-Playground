#include<iostream>
using namespace std;
int main(){
  /*
  int m, n;
  cin>>m>>n;
  
  // declaration 2D array
  int** ptr=new int*[m]; // number of rows(m)
  for (int i = 0; i < n; i++) {
    ptr[i]=new int[n]; // number of column(n)
  }
  
  // ptr[0][0]=1;
  // ptr[0][1]=2;
  // ptr[1][0]=3;
  // ptr[1][1]=4;
  
  // input the 2D array
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin>>ptr[i][j];
    }
  }
  
  // output the 2D array
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cout<<ptr[i][j]<<" ";
    }
    cout<<endl;
  }
  
  //Delete the array created
  for(int i=0;i<m;i++)
    delete [] ptr[i];
  delete [] ptr;
  */
  
  int m,n;
  cin>>m>>n;
  
  int* ptr=new int[m * n];
  
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cin>>*((ptr+i*n)+j);
    }
  }
  
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cout<<*((ptr+i*n)+j)<<" ";
    }
    cout<<endl;
  }
  
  delete[] ptr;
  return 0;
}