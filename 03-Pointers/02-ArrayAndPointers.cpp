#include "iostream"
using namespace std;
int main(){
  int arr[]={10,20,30,40};
  
  cout<<arr<<endl;
  cout<<&arr<<endl;
  cout<<*arr<<endl;
  cout<<endl;
  
  int *ptr=arr;
  for (int i = 0; i < 4; i++) {
    cout<<*ptr<<" ";
    ptr++;
  }
  
  cout<<endl;
  
  for (int i = 0; i < 4; i++) {
    cout<<*(arr+i)<<" ";
    
    //illegal because arr value is constant
    //cout<<*arr<<" ";
    //that con not change
    //arr++;
  }
  return 0;
}