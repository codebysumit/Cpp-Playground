#include<iostream>
#include<climits>
using namespace std;

int maxele(int arr[],int n){
	int ans=INT_MIN;
	for(int i=0;i<n;i++){
		ans=max(ans,arr[i]);
	}
	return ans;
}
	
int histogram(int arr[], int n){
  int ans=0;
  for (int i = 0; i < n; i++) {
    int minh=maxele(arr,n);
    for (int j = i; j < n; j++) {
      minh=min(arr[j], minh);
      int len=j-i+1;
      ans=max(ans,len*minh);
    }
  }
  return ans;
}

int main(){
  int arr[]={2,1,5,6,2,3};
  int n=sizeof(arr)/sizeof(arr[0]);
  cout << histogram(arr,n) << endl;
  return 0;
}