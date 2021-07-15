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

class C:public A{
  public:
  void funC(){
    cout << "Class: C" << endl;
  }
};

class D:public B{
  public:
  void funD(){
    cout << "Class: D" << endl;
  }
};

class E:public B{
  public:
  void funD(){
    cout << "Class: D" << endl;
  }
};

class F:public C{
  public:
  void funD(){
    cout << "Class: D" << endl;
  }
};

class G:public C{
  public:
  void funG(){
    cout << "Class: G" << endl;
  }
};


int main(){
  D obj;
  obj.funA();
  obj.funB();
  
  E objE;
  objE.funA();
  objE.funB();
  
  F objF;
  objF.funA();
  objF.funC();
  
  
  G objG;
  objG.funA();
  objG.funC();
  
  return 0;
}