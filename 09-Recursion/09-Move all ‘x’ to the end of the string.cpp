#include "iostream"
#include "string"
using namespace std;

string moveAllX(string s){
  if(s.length()==0){
    return "";
  }
  
  char ch=s[0];
  //get rest of the string
  string ans=moveAllX(s.substr(1));
  
  if(ch=='x'){
    return (ans+ch);
  }
  return (ch+ans);
}

int main(){
  cout<<moveAllX("axxxbdxcefxhix")<<endl;
  return 0;
}
// "axxxbdxcefxhix"