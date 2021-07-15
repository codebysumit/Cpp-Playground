#include<iostream>
using namespace std;
int stap=0;
/*
// time complexity O(n)
int power(int a, int b){
  stap++;
  if(b==0)
    return 1;
  return a*power(a,b-1);
}
*/

// time complexity O(log n)
int powerAdva(int a, int b){
  cout<<a<<" "<<b<<endl;
  stap++;
  if(b==0)
    return 1;
  // (a^b/2)^2 => (a^2)^b/2
  if(b%2==0)
    return powerAdva(a*a, b/2); // if case even number
  return a*powerAdva(a, b-1); // if case odd number
}

int main(){
  int a,b;
  cin>>a>>b;
  // cout<<power(a,b)<<endl;
  // cout<<stap<<endl;
  
  cout<<powerAdva(a,b)<<endl;
  cout<<stap<<endl;
  
  return 0;
}