#include<iostream>
#include<string>
using namespace std;

string keypadArr[]={"","./","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void keypad(string str, string ans){
  if(str.length()==0){
    cout<<ans<<endl;
    return;
  }
  // cout<<"|"<<str<<"|"<<endl;
  char ch=str[0];
  // cout<<"|"<<ch<<"|"<<endl;
  string code=keypadArr[ch-'0'];//get ASCII code
  string restStr=str.substr(1);
  
  // cout<<"|"<<code<<"|"<<endl;
  // cout<<"|"<<restStr<<"|"<<endl;
  
  for (int i = 0; i < code.length(); i++) {
  // cout<<"|"<<code[i]<<"|"<<endl;
   cout<<"|"<<restStr<<"|"<<endl;
   keypad(restStr, ans + code[i]);
  // cout<<"|"<<restStr<<"|"<<endl;
  // cout<<"|"<<code[i]<<"|"<<endl;
  }
}
int main(){
  // cout<<('2'-'0')<<endl;
  
   keypad("23", "");
  return 0;
}