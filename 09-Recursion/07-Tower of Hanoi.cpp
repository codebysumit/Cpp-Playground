#include "iostream"
#include "string"
using namespace std;
// "pippppiiiipi"
void towerOfHanoi(int n, char src, char dest, char helper){
  if(n==0){
    return; // bass case
  }
  
  towerOfHanoi(n-1, src, helper, dest);
  cout<<"Move from "<<src<<" to "<<helper<<endl;
  towerOfHanoi(n-1, helper, dest, src);
}

int main(){
  towerOfHanoi(3, 'A', 'C', 'B');
  return 0;
}