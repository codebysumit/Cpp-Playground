#include<iostream>
#include<climits>
using namespace std;
bool pairSum(int arr[],int n, int k){
  int low=0;
  int high=n-1;
  
  while (low<high){
    if(arr[low]+arr[high]==k){
      cout<<low<<" "<<high<<endl;
      return 1;
    }
    else if(arr[low]+arr[high]>k){
      high--;
    }
    else{
      low++;
    }
  }
  return 0;
}

int main(){
  //it algorithm was work when this array are sorted
  int arr[]={2,4,7,11,14,16,20,21};//sorted array
  int k=31;
  
  int n=sizeof(arr)/sizeof(arr[0]);
  
  cout<<pairSum(arr,n,k);
  return 0;
}