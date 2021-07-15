#include<iostream>
#include<string>
using namespace std;

void subseq(string s, string ans){
  if(s.length()==0){
    cout<<ans<<endl;
    return;
  }
  char ch=s[0];
  int ascii=int(ch);// int ascii = ch;
  //get rest of the string
  string ros=s.substr(1);
  
  subseq(ros, ans);
  subseq(ros, ans+ch);
  subseq(ros, (ans + to_string(ascii)));
}

int main(){
  subseq("AB","");
  return 0;
}