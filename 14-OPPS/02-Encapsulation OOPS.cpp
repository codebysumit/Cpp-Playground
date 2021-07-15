#include <iostream>
using namespace std;
class demo{
   public:
   int a;
   void funcA(){
     cout << "public function [A]" << endl;
     cout << a << endl;
   }
   private:
   int b;
   void funcB(){
     cout << "private function [B]" << endl;
     cout << b << endl;
   }
   
   protected:
   int c;
   void funcC(){
     cout << "protected function [C]" << endl;
     cout << c << endl;
   }
};

class demo2{
  public:
  void sumit();
};

void demo2::sumit(){
  cout<<"Hi!";
}

int main(){
  demo obj;
  obj.a=2;
  obj.funcA();
  
  // obj.b=3; // error: 'b' is a private member of 'demo'
  // obj.funcB(); // error: 'funcB' is a private member of 'demo'
  
  demo2 obj2;
  obj2.sumit();
  return 0;
}