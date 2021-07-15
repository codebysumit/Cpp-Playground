#include<iostream>
using namespace std;

void selsort(int arr[], int n){
  // int count=0;
  for (int i = 0; i < n-1; i++) {
    for (int j = i+1; j < n; j++) {
      if(arr[j]<arr[i]){
        int temp=arr[j];
        arr[j]=arr[i];
        arr[i]=temp;
      }
      // count++;
    }
  }
  // cout<<count<<endl;
}

int main(){
  int arr[]={6,2,8,1,9,6,3,5,0};
  int n=sizeof(arr)/sizeof(arr[0]);
  cout<<n<<endl;
  
  selsort(arr,n);
  
  for (int i = 0; i < n; i++) {
    cout<<arr[i]<<" ";
  }cout<<endl;
  return 0;
}