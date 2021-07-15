#include<iostream>
using namespace std;

class A{
  public:
  void funA(){
    cout << "Class: A" << endl;
  }
};

class B:public A{
  public:
  void funB(){
    cout << "Class: B" << endl;
  }
};

class C{
  public:
  void funC(){
    cout << "Class: C" << endl;
  }
};

class D:public B, public C{
  public:
  void funD(){
    cout << "Class: D" << endl;
  }
};


int main(){
  D obj;
  obj.funA();
  obj.funB();
  obj.funC();
  obj.funD();
  return 0;
}