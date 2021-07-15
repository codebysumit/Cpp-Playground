#include "iostream"
#include "string"
using namespace std;

void reverse (string s){
  if(s.length()==0)
    return;
  
  string restOfString=s.substr(1);
  reverse(restOfString);
  cout<<s[0];
}

int main(){
  //string str="sumit";
  reverse("sumit");
  return 0;
}