#include<iostream>
using namespace std;

class A{
  public:
  void fun(){
    cout << "Class: A" << endl;
  }
};

class B:public A{
  
};



int main(){
  B obj;
  obj.fun();
  return 0;
}