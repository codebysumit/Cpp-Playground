#include "iostream"
using namespace std;

//14.2 Bit Manipulation - I
void subset(int arr[], int n){
  for (int i = 0; i < (1<<n)/*n^2*/; i++) {
    for (int j = 0; j < n; j++) {
      if(i & (1<<j)){
        cout<<arr[j]<<" ";
      }
    }
    cout << endl;
  }
  return;
}

int main(){
  int arr[]={1,2,3,4};
  // cout << (1<<4) << endl;
  subset(arr, 4);
  
  return 0;
}