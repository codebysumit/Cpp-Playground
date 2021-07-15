#include "iostream"
using namespace std;
int main(){
  int a=100;
  cout<<"a address: "<<&a<<endl;
  cout<<"a value: "<<a<<endl<<endl;
  
  int *p=&a;
  cout<<"p address: "<<&p<<endl;
  cout<<"p value: "<<p<<endl<<endl;
  
  int **p2=&p;
  cout<<"p2 address: "<<&p2<<endl;
  cout<<"p2 value: "<<p2<<endl<<endl;
  
  cout<<"1th label: "<<*p2<<endl;
  cout<<"2nd label: "<<**p2<<endl;
  
  return 0;
}