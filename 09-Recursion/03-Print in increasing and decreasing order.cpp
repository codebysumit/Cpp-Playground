#include "iostream"
using namespace std;

void decreasing(int n){
  // if(n==0){
  //   return;
  // }
  if(n==1){
    cout<<1<<endl;
    return;
  }
  cout<<n<<endl;
  decreasing(n-1);
}

void increasing (int n){
  if(n==1){
    cout<<1<<endl;
    return;
  }
  
  increasing(n-1);
  cout<<n<<endl;
}

int main(){
  int n;
  cin>>n;
  decreasing(n);
  cout<<endl<<endl;
  increasing(n);
  return 0;
}