#include "iostream"
using namespace std;

int sum(int n){
  if(n==0)
  {
    return 0;
  }
  int previousSum=sum(n-1);
  return n+previousSum;
}

int power(int n, int p){
  if(p==0){
    return 1;
  }
  int previousPower=power(n,p-1);
  return n*previousPower;
}

int factorial(int n){
  if(n==0){
    return 1;
  }
  // int previousFactorial=factorial(n-1);
  // return n*previousFactorial;
  return n*factorial(n-1);
}

int fib(int n){
  // if(n==0){
  //   return 0
  // }
  // if(n==1){
  //   return 1;
  // }
  if(n==0||n==1){ //bass condition
    return n;
  }
  return fib(n-1)+fib(n-2);
}

int facto2(int n){
  if(n==1)
    return 1;
  
  return n*facto2(n-1);
}

int main(){
  int n;
  cin>>n;
  // cout<<fib(n);
  // cout<<facto2(n)<<endl;
  return 0;
}