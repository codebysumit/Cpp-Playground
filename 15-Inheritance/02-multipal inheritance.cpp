#include<iostream>
using namespace std;

class A{
  public:
  void funA(){
    cout << "Class: A" << endl;
  }
};

class B{
  public:
  void funB(){
    cout << "Class: B" << endl;
  }
};

class C:public A, public B{
  public:
  void funC(){
    cout << "Class: C" << endl;
  }
};


int main(){
  C obj;
  obj.funA();
  obj.funB();
  obj.funC();
  return 0;
}