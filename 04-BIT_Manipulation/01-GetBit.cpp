#include "iostream"

using namespace std;

int getBit(int num, int position){
  //n=0101 => 5
  //position = 2;
  //1. 1<<position => 0001<<2 = 0100
  //2. num & (answer of stap 1) => 0101 & 0100 =0100
  //3. if num & (1<<position) !=0, then bit is 1
  //4. return (answer of stap 3)
  return ((num & (1<<position))!=0);
}
int main(){
  cout << getBit(5,2) << endl;
  
  return 0;
}