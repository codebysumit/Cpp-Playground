#include<iostream>
#include<fstream>
using namespace std;
/*
A) The useful class in c++ working files
  1.fstreambase
  2.ifstream --> derived from fstreambase
  3.ofstream --> derived from fstreambase
*/

/*
B) Two ways to open a file in c++
  1.using the constructor
  2.using the member function open() of the class 
*/
int main(){
  // 1.open the file using constructor writing it
  // ofstream out("example.txt");
  // out<<"Sumit Vai"; // wright the file Operation
  
  // 2.open the file using constructor reading it
  string str;
  ifstream in("example.txt");
  // in>>str; // reading the file Operation
  // cout<<str<<endl; // store Strings without space and new line
  
  // getline(in,str); // store Strings with space
  // cout<<str<<endl;
  // getline(in,str); // store Strings with space
  // cout<<str<<endl;
  // getline(in,str); // store Strings with space
  // cout<<str<<endl;
  
  
  return 0;
}