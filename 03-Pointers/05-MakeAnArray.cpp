#include "iostream"
using namespace std;
int main(){
  int p;
  int *ptr;
  ptr=&p;
  
  int *temp=ptr;
  
  *ptr=10;
  
  ptr+=1;
  *ptr=20;
  
  ptr=temp;
  
  cout << *(ptr) << endl;
  cout << *(ptr+1) << endl;
  
  return 0;
}