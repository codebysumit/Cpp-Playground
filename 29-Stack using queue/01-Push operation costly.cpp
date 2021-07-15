#include "iostream"
#include "queue"
using namespace std;
// making push operation costly
class stack{
  int N;
  queue<int> q1;
  queue<int> q2;
  
  public:
  stack(){
    N=0;
  }
  
  void push(int x){
    q2.push(x);
    N++;
    while(!q1.empty()){
      q2.push(q1.front());
      q1.pop();
    }
    // swap two queue
    queue<int> temp=q1;
    q1=q2;
    q2=temp;
  }
  
  void pop(){
    if(q1.empty()){
      cout<<"No element in stack\n";
      return;
    }
    q1.pop();
    N--;
  }
  
  int top(){
    if(q1.empty()){
      cout<<"No element in stack\n";
      return -1;
    }
    return q1.front();
  }
  
  int size(){
    return N;
  }
  
  bool empty(){
    return q1.empty();
  }
};

int main(){
  stack st;
  st.push(1);
  st.push(2);
  st.push(3);
  st.push(4);
  
  cout<<st.top()<<endl;
  st.pop();
  cout<<st.top()<<endl;
  st.pop();
  cout<<st.top()<<endl;
  st.pop();
  cout<<st.top()<<endl;
  st.pop();
  
  // cout<<st.top()<<endl;
  // st.pop();
  
  cout<<st.empty()<<endl;
  cout<<st.size()<<endl;
  
  return 0;
}