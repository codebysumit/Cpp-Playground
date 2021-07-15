#include<iostream>
using namespace std;

int path(int m, int n){
  if(m==1||n==1)
    return 1;
  return path(n,m-1)+path(m,n-1);
}

int main(){
  int m,n;
  cin>>m>>n;
  cout<<path(m,n)<<endl;
  return 0;
}