#include<iostream>
using namespace std;
int uniqueNumber(int arr[], int n){
  int xorsum=0;
  for (int i = 0; i < n; i++) {
    xorsum=xorsum^arr[i];
  }
  return xorsum;
}
int main(){
  int arr[]={3,6,7,8,3,6,7};
  cout << uniqueNumber(arr, 7) << endl;
  return 0;
}