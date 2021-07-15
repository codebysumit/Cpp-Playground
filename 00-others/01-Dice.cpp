#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<conio.h>
using namespace std;
// TeachMeTechnically
int dice(){
  srand(time(NULL));
  int dice=rand()%6+1;
  return dice;
}
int main(){
  sumit:
  cout<<dice()<<endl;
  
  if(getch()=='s'){
    clrscr();
    goto sumit;
  }
  return 0;
}