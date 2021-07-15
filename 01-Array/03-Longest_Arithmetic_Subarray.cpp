#include<iostream>

using namespace std;

int main(){
  int n;//N is size of array
  cin>>n;//input the array N variable
  
  int arr[n];//Array size declaration
  
  //input array elements
  for(int i=0;i<n;i++)
    cin>>arr[i];
  
  //main code started
  int ans=2;//bass value
  int cd=arr[1]-arr[0];//common different elements
  int j=2;//loop start array 3th elements because arr[0]-arr[1] checked
  int curr=2;//current same subarray number
  
  //start loop array 3th elements to N num. elements
  while (j<n){
    //check common different(cd) equal arr[j-1]-arr[j]
    if(arr[j-1]-arr[j]==cd){
      curr++;//update 1 in current variable
    }
    else{
      cd = arr[j-1]-arr[j];//update new common different by cd variable
      curr=2;//update 2 default bass value in current variable (curr)
    }
    //check & update maximum Arithmetic Subarray number in ans variable
    ans=max(ans,curr);
    
    j++;//increment j variable to continue the loop
  }
  
  //print answer
  cout<<ans<<endl;
 
  return 0;
}