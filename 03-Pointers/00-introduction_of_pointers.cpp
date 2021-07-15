#include "iostream"
using namespace std;
int main(){
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  
  int a=10;//int variable
  int *ptr;//declaration pointer ptr
  
  ptr=&a;//initiation pointer a variable address
  
  cout<<"value of a: "<<a<<endl;
  cout<<"address of a: "<<&a<<endl<<endl;
  
  cout<<"value of ptr: "<<ptr<<endl;
  cout<<"address of ptr: "<<&ptr<<endl<<endl;
  
  //dereference/dereferencing of ptr
  cout<<"dereference of *ptr: "<<*ptr<<endl;
  
  //update a variable address
  *ptr=20;
  cout<<"update value of a: "<<a<<endl;
  return 0;
}