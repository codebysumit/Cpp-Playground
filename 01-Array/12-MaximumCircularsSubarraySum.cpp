#include<iostream>
#include<climits>
using namespace std;

int kadane(int arr[], int n){
  int currentSum=0;
  int maxSum=INT_MIN;
  for (int i = 0; i < n; i++) {
    //add 1st to Target elements total sum
    currentSum+=arr[i];
    //check currentSum < 0 then
    //update 0 in currentSum variable
    if(currentSum<0){
      currentSum=0;
    }
    //update maximum sum in maxSum variable
    maxSum=max(maxSum,currentSum);
  }
  return maxSum;//return maximum sum
}

int main(){
  int n;
  cin>>n;
  
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin>>arr[i];
  }
  
  int wrapSum;
  int nonWrapSum;
  
  nonWrapSum=kadane(arr,n);
  
  int totalSum=0;
  for (int i = 0; i < n; i++) {
    totalSum += arr[i]; //calculate total elements sum
    arr[i] = -arr[i]; //reverse all elements sine
  }
  
  wrapSum=totalSum + kadane(arr, n); //- - = +
  
  cout<<max(wrapSum, nonWrapSum)<<endl;
  
  return 0;
}