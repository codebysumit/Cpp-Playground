#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
// TeachMeTechnically
int get_reman(int a, int b){
  return b%a;
}
int main(){
  start:
  int a,b;
  cin>>a>>b;
  
  cout<<get_reman(b,a)<<endl;
  getch();
  char check=getch();
  if(check=='\n'){
    clrscr();
    goto start;
  }
  
  if(check=='x'||check=='X'){
    exit(0);
  }
  return 0;
}