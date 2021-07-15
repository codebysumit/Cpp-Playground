#include<iostream>
using namespace std;

class base {
  public:
  virtual void print(){
    cout<<"base class print function"<<endl;
  }
  void display(){
    cout<<"base class display function"<<endl;
  }
};

class derived:public base {
  public:
  void print(){
    cout<<"derived class print function"<<endl;
  }
  void display(){
    cout<<"derived class display function"<<endl;
  }
};

int main(){
  base *baseptr;
  derived obj;
  baseptr=&obj;
  
  baseptr -> print(); // because it is ptr than -> ope. use
  baseptr -> display(); // because it is ptr than -> ope. use
  
  return 0;
}