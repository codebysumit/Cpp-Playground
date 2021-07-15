#include "iostream"
using namespace std;

//14.2 Bit Manipulation - I
int NumberOfOnes(int num){
  int count=0;
  while(num){
    num=num & (num-1);
    count++;
  }
  return count;
}

int main(){
  cout << NumberOfOnes(19) << endl;
  return 0;
}