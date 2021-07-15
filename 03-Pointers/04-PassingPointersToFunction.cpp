#include "iostream"
using namespace std;

//call by reference
void swap(int *a, int *b){
  int temp=*a;
  *a=*b;
  *b=temp;
  return;
}

void increment(int *a){
  ++*a;
  return;
}

void update(int *a, int *b){
  cin>>*a>>*b;
  return;
}

int main(){
  #ifndef SUMIT_DAS
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  
/*
  int a=2;
  int b=4;
  
  int *aptr=&a;
  int *bptr=&b;
  
  //passing pointers
  swap(aptr, bptr);
  cout<<a<<" "<<b<<endl<<endl;
  
  //passing variable address in pointers
  swap(&a, &b);
  cout<<a<<" "<<b<<endl<<endl;
  
*/
/* 
  int a;
  int *ptr=&a;
  cin>>a;
/  
  increment(ptr);
  cout<<a<<endl;
*/

  int a=24,b=34;
  cout<<a<<" "<<b<<endl;
  
  update(&a, &b);//pass variable address in pointers
  cout<<a<<" "<<b<<endl;
  
  return 0;
}