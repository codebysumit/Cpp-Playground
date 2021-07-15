#include<iostream>
using namespace std;
// struct students {
//   int roll;
//   char friChr;
//   float percentages;
// };

typedef struct students {
  int roll; // 4
  char friChr; // 1
  float percentages; // 4
  // total pass occupied : 4+1+4=5
}stu;

union payment {
  int pice; // 4
  char car; // 1
  float pounds; // 4
  // total pass occupied : maximum data type size = 4
};

int main(){
  // struct students sumit; // struct using make deta type
  // sumit.roll=24;
  // sumit.friChr='S';
  // sumit.percentages=99.55;
  
  // cout << sumit.roll << endl;
  // cout << sumit.friChr << endl;
  // cout << sumit.percentages << endl;
  
  // stu sumit;
  
  // sumit.roll=24;
  // sumit.friChr='S';
  // sumit.percentages=99.55;
  
  // cout << sumit.roll << endl;
  // cout << sumit.friChr << endl;
  // cout << sumit.percentages << endl;
  
  
  // cout<<"int: "<<sizeof(int)<<endl;
  // cout<<"char: "<<sizeof(char)<<endl;
  // cout<<"float: "<<sizeof(float)<<endl;
  
  // cout<<"struct: "<<sizeof(students)<<endl;
  // cout<<"union: "<<sizeof(payment)<<endl;
  
  // union payment pay;
  
  // pay.pice=200;
  // pay.car='A';
  // pay.pounds=473.46;
  
  // // cout<<pay.pice<<endl;
  // // cout<<pay.car<<endl;
  // cout<<pay.pounds<<endl;
  
  enum meal{breakfast, lunch, dinner};
  
  // cout<<breakfast<<endl;
  // cout<<lunch<<endl;
  // cout<<dinner<<endl;
  
  // meal m1;
  // m1=dinner;
  meal m1=dinner;
  cout << (m1==2) << endl;
  
  return 0;
}