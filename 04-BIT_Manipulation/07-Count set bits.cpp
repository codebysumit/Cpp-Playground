#include "iostream"
using namespace std;

int ispowerof2(int num){
  //14.2 Bit Manipulation - I
  return (num && !(num & num-1));
}

int main(){
  cout << ispowerof2(16) << endl;
  return 0;
}