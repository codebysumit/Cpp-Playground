#include "iostream"
using namespace std;

void fun(){
  cout << "ho ho ho..." << endl;
}

int fun(int n){
  return (n+2);
}

int fun(int a, int b){
  return (a+b);
}

int main(){
  fun();
  cout<<fun(2)<<endl;
  cout<<fun(2,4)<<endl;
  return 0;
}