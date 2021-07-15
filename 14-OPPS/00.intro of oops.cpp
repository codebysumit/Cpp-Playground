#include "iostream"
using namespace std;

/*
class student{
  public:
  string name;
  int age;
  bool gender;
  
  void printInfo(){
    cout<<name<<endl;
    cout<<age<<endl;
    cout<<gender<<endl;
  }
};
*/

class student{
  string name; // private element
  public:
  // access or input private element
  void setName(string s){
    name=s;
  }
  int age;
  bool gender;
  
  // print private element
  void getName(){
    cout<<name<<endl;
  }
  
  void printInfo(){
    cout<<name<<endl;
    cout<<age<<endl;
    cout<<gender<<endl;
  }
  
  // default constructor
  student(){
    cout<<"default continue"<<endl;
  }
  
  // parameterised constructor
  student(string s, int a, bool g){
    cout<<"parameterised continue"<<endl;
    name=s;
    age=a;
    gender=g;
  }
  
  // customs copy constructor
  student(student &a){
    cout<<"customs copy constructor"<<endl;
    name=a.name;
    age=a.age;
    gender=a.gender;
  }
  
  // destructor
  // ~student(){
  //   cout<<"Destroy destructor"<<endl;
  // }
  
  // operator over loding
  bool operator == (student &a){
    if(name==a.name&&age==a.age&&gender==a.gender){
      return true;
    }
      return false;
  }
  
  // function over loding
  void getName(string s){
    name=s;
    return;
  }
};

int main(){
/*
  // 1::1st Mather
  // input
  // student a;// class object
  // a.name="Sumit";
  // a.age=14;
  // a.gender=0;
  
  // output
  // cout<<a.name<<endl;
  // cout<<a.age<<endl;
  // cout<<a.gender<<endl;
*/
  
  // 2::2nd Mather
  // int n;
  // cin>>n;
  
/* 
  // input
  student arr[n];
  for (int i = 0; i < n; i++) {
    cin>>arr[i].name;
    cin>>arr[i].age;
    cin>>arr[i].gender;
  }
*/

  // student arr[n];
  // for (int i = 0; i < n; i++) {
  //   string s;
  //   cin>>arr[i].setName(s);
  //   cin>>arr[i].age;
  //   cin>>arr[i].gender;
  // }
  
  // output
  // for (int i = 0; i < n; i++) {
  //   arr[i].printInfo();
  // }
  
  // parameterised constructor
  student a("sumit",14,0);
  // a.printInfo();
  
  //default constructor
  student b;
  
  // default copy constructor (shallow copy)
  // student d(a);
  // d.printInfo();
  
  // customs copy constructor (deep copy)
  student c(a);
  // student c=a;
  // c.printInfo();
  
  // operator over loding
  // if(a==c)
  //   cout<<"same"<<endl;
  // else
  //   cout<<"not same"<<endl;
  // return 0;
  
  // function over loding
  student f("naha",18,1);
  f.getName("have a good day");
  f.printInfo();
  return 0;
}