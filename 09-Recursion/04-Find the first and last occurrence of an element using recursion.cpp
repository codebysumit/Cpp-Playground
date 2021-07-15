#include "iostream"
using namespace std;

int firstOcc(int arr[], int size, int i, int key){
  if(i==size){
    return -1;
  }
  
  if(arr[i]==key){
    return i;
  }
  
  return firstOcc(arr, size, i+1, key);
}

int lastOcc(int arr[], int size, int i, int key){
  if(i==size){//Bass condition
    return -1;
  }
  
  int restArray=lastOcc(arr, size, i+1, key);
  
  if(restArray!=-1){
    return restArray;
  }
  
  if(arr[i]==key){
    return i;
  }
  return -1;
}

int main(){
  int arr[]={4,2,1,2,5,2,7};
  int n=sizeof(arr)/sizeof(arr[0]);
  cout<<firstOcc(arr,n,0,2)<<endl;
  cout<<lastOcc(arr,n,0,2)<<endl;
  return 0;
}