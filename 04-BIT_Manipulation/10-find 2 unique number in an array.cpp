#include<iostream>
using namespace std;
int setBit(int n, int pos){
  return ((n & (1<<pos))!=0);
}

void unique2Number(int arr[], int n){
  int xorsum=0;
  for (int i = 0; i < n; i++) {
    xorsum=xorsum^arr[i];
  }
  
  int tempxor=xorsum;
  
  int setbit=0;
  int position=0;
  while(setbit!=1){
    setbit=xorsum & 1; //get set bit
    position++; //get position in set bit
    xorsum=xorsum>>1;
  }
  
  //start loop all elements in the array
  int newxor=0;
  for (int i = 0; i < n; i++) {
    if(setBit(arr[i], position-1)){
      newxor=newxor ^ arr[i];
    }
  }
  
  cout << newxor << endl;//get frist unique number
  cout << (newxor^tempxor) << endl;//get second unique number
}
int main(){
  int arr[]={3,6,7,8,9,3,6,7};
  unique2Number(arr, 8);
  return 0;
}