#include<iostream>
#include<fstream>
#include<string>
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
  
  // ofstream fout;
  // fout.open("example.txt");
  // fout<<"hay there i am your \'friend\'.";
  // fout.close();

/*
  string str,str2;
  ifstream fin;
  fin.open("example.txt");
  
  // fin>>str>>str2;
  // cout<<str<<str2<<endl;
  
  // cout<<fin.eof()<<endl;
  
  while(fin.eof()==0){
    getline(fin,str);
    cout<<str<<endl;
    // cout<<fin.eof()<<endl;
  }
  
  fin.close();
*/
  return 0;
}