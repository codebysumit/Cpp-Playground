#include "iostream"
using namespace std;
int main(){
/*
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
*/
  
  //integer pointer
  // int a=10;
  // int *ptr=&a;
  
  //character pointer
  // char a='A';
  // char *ptr=&a;
  
  //float pointer
  // float a=69.66;
  // float *ptr=&a;
  

  //bool pointer
   bool a=true;
   bool *ptr=&a;
  
  
  cout<<ptr<<endl<<endl;
  
  //increment ope. ++ or --
  ptr++;//ptr--;
  cout<<ptr<<endl<<endl;
  
  //add 1 or less 1
  ptr+=1;//ptr-=1;
  cout<<ptr<<endl;
  
  return 0;
}