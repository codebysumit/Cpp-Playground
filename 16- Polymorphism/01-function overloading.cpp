#include <iostream>
using namespace std;
class sumit{
  public:
  void fun(){
    cout << "function with no argument" << endl;
  }
  
  void fun(int n){
    cout << "function with int argument" << endl;
  }
  
  void fun(double n){
    cout << "function with double argument" << endl;
  }
};

int32_t main(){
  sumit s;
  s.fun();
  s.fun(4);
  s.fun(4.7);
  return 0;
}