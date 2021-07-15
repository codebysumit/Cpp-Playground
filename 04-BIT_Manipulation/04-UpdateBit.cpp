#include "iostream"

using namespace std;

int updateBit(int num, int position, int value){
  //n=0101 => 5
  //position = 1;
  //update_value = 1
  
  //Clear Bit
  //1. 1<<position => 0001<<1 = 0010
  //2. ~(answer of stap 1) => ~0010 => 1101
  //3. num & (answer of stap 2) => 0101 & 1101 = 0101
  
  //Set Bit
  //4. update_value<<position => 0001<<1 = 0010
  //5. num | (answer of stap 1) => 0101 | 0010 =0111
  
  //4. return (answer of stap 5)
  
  int mask=~(1<<position);
  num = num & mask;
  return (num | (value<<position));
}

int main(){
  cout << updateBit(5, 1, 1) << endl;
  return 0;
}