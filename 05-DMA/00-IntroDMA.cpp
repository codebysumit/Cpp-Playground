#include <iostream>
using namespace std;
int main(){
  //memory allocat in stack
  int a=10;
  
  //dynamic memory allocation
  //allocat memory in heap
  /* ptr is a pointers that is store allocat
  integer variable memory address in heap */
  int *ptr=new int();//int *ptr=new int;
  
  //initiation DMA
  *ptr=10; //int *ptr=new int(10);
  
  cout<<"value: "<<*ptr<<endl;
  cout<<"address: "<<ptr<<endl;
  
  //deallocate memory from heap
  delete(ptr);// delete ptr;
  
  cout<<"value: "<<*ptr<<endl;
  cout<<"address: "<<ptr<<endl;
  cout<<endl;
  
  //allocat memory of array
  ptr=new int[4];
  
  cout<<"ptr[]: "<<*ptr<<endl;
  
  //access variable
  for (int i = 0; i < 4; i++) {
    cin>>ptr[i];//(ptr+i)
  }
  
  cout<<"ptr[]: "<<*ptr<<endl;
  
  //print
  for (int i = 0; i < 4; i++) {
    cout<<*(ptr+i)<<" ";//*ptr[i]
  }
  
  cout<<endl;
  
  //delete allocat memory from heap
  delete[]ptr;
  
  cout<<"ptr[]: "<<*ptr<<endl;
  
  //pointers value delete
  ptr=NULL;
  
  return 0;
}