#include <iostream>
using namespace std;
class complex{
  private:
  int real,imag;
  
  public:
  complex(int r=0, int i=0){
    real=r;
    imag=i;
  }
  
  complex operator + (complex const &obj){
    complex res;
    res.imag=imag+obj.imag;
    res.real=real+obj.real;
    return res;
  }
  
  void display(){
    cout<<real<<" +i"<<imag<<endl;
  }
};

int32_t main(){
  complex a(12,7);
  complex b(6,7);
  complex c=a+b;
  c.display();
  return 0;
}