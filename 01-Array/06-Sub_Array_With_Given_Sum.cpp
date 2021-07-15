#include<iostream>
using namespace std;
int main(){
  int n,s;//n=>array size, s=>given number
  // input n,s variable
  cin>>n>>s;
  
  //declaration n size array
  int arr[n];
  
  //input array elements
  for(int i=0;i<n;i++)
    cin>>arr[i];
  
  //required variable
  //idaters
  int i=0,j=0,st=-1,en=-1,sum=0;
  
  while (j<n&&sum+arr[j]<=s){
    sum+=arr[j];
    j++;
  }
  //check sum equal to given number
  if(sum==s){
    cout<<i+1<<" "<<j<<endl;
    return 0;
  }
  
  while (j<n){
    sum+=arr[j];
    while (sum>s){
      sum-=arr[i];
      i++;
    }
    
    if(sum==s){
      st=i+1;
      en=j+1;
      break;
    }
    j++;
  }
  
  cout<<st<<" "<<en<<endl;
  
  return 0;
}