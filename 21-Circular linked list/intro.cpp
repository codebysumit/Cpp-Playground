#include<iostream>
using namespace std;

class node{
  public:
  int data;
  node* next;
  
  node(int val){
    data=val;
    next=NULL;
  }
};

// insert at head
void insertAtHead(node* &head, int val){
  node* n=new node(val);
  
  if(head==NULL){
    n->next=n;
    head=n;
    return;
  }
  
  node* temp=head;
  
  while(temp->next!=head){
    temp=temp->next;
  }
  
  temp->next=n;
  n->next=head;
  head=n;
}
  
// insert at tail
void insertAtTail(node* &head, int val){
  if(head==NULL){
    insertAtHead(head, val);
    return;
  }
  
  node* n=new node(val);
  node* temp=head;
  
  while(temp->next!=head){
    temp=temp->next;
  }
  temp->next=n;
  n->next=head;
}

// display
void display(node* &head){
  node* temp=head;
  
  do{
    cout<<temp->data<<" ";
    temp=temp->next;
  } while(temp!=head);
  //} while(temp!=NULL);
  cout<<endl;
}

// delete At Head
void deleteAtHead(node* &head){
  node* temp=head;
  
  while(temp->next!=head){
    temp=temp->next;
  }
  
  node* to_del=head;
  temp->next=head->next;
  head=head->next;
  
  delete to_del;
}

// deletion and delete at ta
void deletion(node* &head, int pos){
  if(pos==1){
    deleteAtHead(head);
    return;
  }
  
  node* temp=head;
  int count=1;
  
  while(count!=pos-1){
    temp=temp->next;
    count++;
  }
  
  node* to_del=temp->next;
  temp->next=temp->next->next;
  
  delete to_del;
}

int main(){
  node* head=NULL;
  insertAtTail(head,1);
  insertAtTail(head,2);
  insertAtTail(head,3);
  display(head);
  insertAtHead(head,5);
  display(head);
  
  deletion(head,4);
  display(head);
  
  deletion(head,1);
  display(head);
  return 0;
}