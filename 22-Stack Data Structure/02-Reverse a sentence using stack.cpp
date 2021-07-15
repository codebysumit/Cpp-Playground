#include "iostream"
#include "stack"
using namespace std;

void reverseSentence(string str){
  stack<string> st;
  
  // separate words from a strings
  for (int i = 0; i < str.length(); i++) {
    string word="";
    
    while(str[i]!=' '&&i<str.length()){
      word+=str[i];
      i++;
    }
    st.push(word); // push the word at stack
  }
  
  // reverse string print
  while(!st.empty()){
    cout<<st.top()<<" ";
    st.pop();
  }
  cout<<endl;
}

int main(){
  // stack<data_type> stack_name;
  string str="Hay, how are you doing?";
  reverseSentence(str);
  return 0;
}