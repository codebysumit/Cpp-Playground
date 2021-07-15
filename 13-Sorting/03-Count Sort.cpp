#include<iostream>
#include<cstring>
using namespace std;

void countSort(int arr[], int n){
  int mid=arr[0];
  for (int i = 0; i < n; i++) {
    mid=max(mid, arr[i]);
  }
  
  int count[mid];
  memset(count,0,sizeof(count));
  for (int i = 0; i < n; i++) {
    count[arr[i]]++;
  }
  
  for (int i = 1; i <= mid; i++) {
    count[i]+=count[i-1];
  }
  
  int output[n];
  for (int i = n-1; i >= 0; i--) {
    output[--count[arr[i]]]=arr[i];
  }
  
  for (int i = 0; i < n; i++) {
    arr[i]=output[i];
  }
}

int main(){
  int arr[9]={1,3,2,3,4,1,6,4,3};
  countSort(arr,9);
  for (int i = 0; i < 9; i++) {
    cout<<arr[i]<<" ";
  }
  return 0;
}
// Time Complexity: O(N)
// Space Complexity: O(max(Arr))