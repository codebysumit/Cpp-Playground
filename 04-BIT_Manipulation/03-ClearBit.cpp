#include "iostream"

using namespace std;

int clearBit(int num, int position){
  //n=0101 => 5
  //position = 2;
  //1. 1<<position => 0001<<2 = 0100
  //2. ~(answer of stap 1) => ~0100 => 1011
  //3. num & (answer of stap 2) => 0101 & 1011 = 0001
  //4. return (answer of stap 3)
  
  int mask=~(1<<position);
  return (num & mask);
}

int main(){
  cout << clearBit(5,2) << endl;
  return 0;
}