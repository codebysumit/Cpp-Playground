#include "iostream"
using namespace std;
bool check_shorted(int arr[], int n){
  if(n==1){
    return true;
  }
  bool restArray=check_shorted(arr+1,n-1);
  
  return (arr[0]<arr[1]&&restArray);
}

int main(){
  int arr[]={1,2,48,6,8,55};
  cout<<check_shorted(arr, 6);
  return 0;
}