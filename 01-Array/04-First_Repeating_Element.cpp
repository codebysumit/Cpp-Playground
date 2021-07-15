#include<iostream>
#include<climits>
#include<cmath>
using namespace std;

int main(){
  int n;//get array size
  cin>>n;//input value in n
  
  int arr[n];//make n size array
  //input array
  for(int i=0;i<n;i++)
    cin>>arr[i];
  
  //make a big size (10^6) array between arr[n]
  const int N=1e6+2;//use const keywords because don't change array size
  
  //idx N size array
  int idx[N];
  //insulation idx array in -1
  for(int i=0;i<N;i++)
    idx[i]=-1;
    
  int minidx=INT_MAX;
  
  for(int i=0;i<n;i++){
    if(idx[arr[i]]!=-1){
      minidx=min(minidx, idx[arr[i]]);
    }
    else {
      idx[arr[i]]=i;
    }
  }
  if(minidx==INT_MAX){
    cout<<"-1"<<endl;
  }
  else {
    cout<<minidx+1<<endl;
  }
  return 0;
}