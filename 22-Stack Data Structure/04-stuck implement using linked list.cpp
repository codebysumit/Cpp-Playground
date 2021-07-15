#include<iostream>
using namespace std;
#define size 500

class node{
  public:
  int data;
  node* next;
  
  node(int val){
    data = val;
    next = NULL;
  }
};

class stack{
  node* head;
  int reco=0;
  
  public:
  stack(){
    head=NULL;
  }
  
  // push Operation
  void push(int val){
    node* n=new node(val); // make new linked list
    
    // stack size check
    if(n==NULL||reco==size){
      cout<<"Stack overflow"<<endl;
      return;
    }
    // check linked is null
    if(head==NULL){
      head=n;
      reco++;
      return;
    }
    
    n->next=head;
    head=n;
    reco++;
  }
  
  // pop Operation
  void pop(){
    if(head==NULL){
      cout<<"No element to pop"<<endl;
      return;
    }
    node* to_del=head;
    head=head->next;
    reco--;
    delete to_del;
  }
  
  // top Operation
  int top(){
    if(head==NULL){
      cout<<"No element present in stack"<<endl;
      return -1;
    }
    return head->data;
  }
  
  // empty Operation
  bool empty(){
    return head==NULL;
  }
  
  // total element number
  int record (){
    return reco;
  }
};

int main(){
  stack st;
  st.push(1);
  st.push(2);
  st.push(3);
  st.push(4);
  st.push(5);
  st.push(6);
  
  cout<<st.top()<<endl;
  st.pop();
  cout<<st.top()<<endl;
  st.pop();
  cout<<st.top()<<endl;
  st.pop();
  cout<<st.top()<<endl;
  st.pop();
  cout<<st.top()<<endl;
  st.pop();
  cout<<st.top()<<endl;
  st.pop();
  
  // cout<<st.empty()<<endl;
  cout<<st.record()<<endl;
  
  return 0;
}