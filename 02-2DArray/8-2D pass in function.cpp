#include<iostream>
using namespace std;

void eco(int *arr, int m, int n){
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cout<<*((arr+i*n)+j)<<" ";
    }
    cout<<endl;
  }
}

int main(){
  int m=3, n=3;
  int arr[3][3]={
                  {1,2,3},
                  {4,5,6},
                  {7,8,9}
                };
  
  eco((int *)arr,m,n);
  // int *ptr=(int *)arr;
  
  // cout << "*ptr: " << *ptr << endl;
  // cout << "ptr: " << ptr << endl;
  
  // cout << "*ptr+1: " << *ptr+1 << endl;
  // cout << "ptr+1: " << ptr+1 << endl;
  
  // cout << "*ptr+2: " << *ptr+2 << endl;
  // cout << "ptr+2: " << ptr+2 << endl;
  
  // cout << "*ptr+3: " << *ptr+3 << endl;
  // cout << "ptr+3: " << ptr+3 << endl;
  
  // cout << "*ptr+4: " << *ptr+4 << endl;
  // cout << "ptr+4: " << ptr+4 << endl;
  
  // cout << sizeof(arr) << endl;
  
  return 0;
}