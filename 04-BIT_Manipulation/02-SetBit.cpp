#include "iostream"

using namespace std;

int setBit(int num, int position){
  //n=0101 => 5
  //position = 1;
  //1. 1<<position => 0001<<1 = 0010
  //2. num | (answer of stap 1) => 0101 | 0010 =0111 => 7
  //3. return (answer stap 2)
  
  return (num | (1<<position));
}
int main(){
  cout << setBit(5,1) << endl;
  return 0;
}