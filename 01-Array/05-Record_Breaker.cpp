#include<iostream>
using namespace std;
int main(){
  int n;//N number of array size
  cin>>n;//input array size
  int arr[n+1];//+1 size increment array size & array declaration
  
  //input array elements till N number
  for(int i=0;i<n;i++)
    cin>>arr[i];
    
  //input array N num. element a small value
  arr[n]=-1;
  
  //check user input N is equal to 1 then exit the program
  if(n==1){
    cout<<"1"<<endl;//print massage
    return 0;//exit the program
  }
  
  int ans=0;//declaration answer variable & remove all garbage value
  int mx=-1;//declaration mx variable & inisilation a minimum value (-1)
  
  //terget array 1st elements to last elements
  for(int i=0;i<n;i++){
    //check record break day conditions
    if(arr[i]>mx&&arr[i]>arr[i+1]){
      ans++;//increase ans variable & count ans
      mx=max(mx,arr[i]);//update mx variable to maximum record break number
    }
  }
  //output total record break day number
  cout<<ans<<endl;
  return 0;
}