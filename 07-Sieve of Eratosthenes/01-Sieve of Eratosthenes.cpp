#include<iostream>
using namespace std;

//1::check prime or not 2
// Time Complexity: O(n sqrt n)
// Space Complexity: O(1)
bool check_prime(int n){
  for (int i = 2; i*i <= n; i++) {
    if(n%i==0)
      return false;
  }
  return true;
}

//2::get prime till n
void get_prime_till_n(int n){
  for (int i = 2; i <= n; i++) {
    if(check_prime(i))
      cout<<i<<" ";
  }
}

//3::Sieve of Eratosthenes
void primeSive(int n){
  int prime[n+1];// make array till given num n
  //int prime[n+1]={0};
  //or
  for (int i = 0; i <= n; i++) {
    prime[i]=0;
  }
  
  //iteration all array elements 2=>n
  for (int i = 2; i <= n; i++) {
    if(prime[i]==0){
      for (int j = i*i; j <= n; j+=i) {// jump the i
        prime[j]=1;
      }
    }
  }

  //print all prime number
  for (int i = 2; i <= n; i++) {
    if(prime[i]==0)
      cout<<i<<" ";
  }
  cout<<endl;
}

//4::Prime Factorization using Sieve
// Preprocessing for Sieve: O(n log log n)
// Time Complexity for factorization: O(log n)
// Space Complexity: O(n)
void primeFacror(int n){
  int spf[n+1];
  //int spf[n]={0};
  for (int i = 0; i <= n; i++){
    spf[i]=0;
  }
  
  for (int i = 2; i <= n; i++) {
    spf[i]=i;
  }
  
  for (int i = 2; i <= n; i++) {
    if(spf[i]==i){
      for (int j = i*i; j <= n; j+=i) {
        if(spf[j]==j){
          spf[j]=i;
        }
      }
    }
  }
  
  while(n!=1){
    cout<<spf[n]<<" ";
    n/=spf[n];
  }
}

int main(){
  int n;
  cin>>n;
  primeFacror(n);
  cout<<endl;
  
  return 0;
}