#include<iostream>
using namespace std;

// doubly linked list structure
class node{
  public:
  int data;
  node* next;
  node* prev;
  
  node(int val){
    data=val;
    next=NULL;
    prev=NULL;
  }
};

// insert element at head in linked list
void insertAtHead(node* &head, int val){
  node* n=new node(val);
  n->next=head;
  
  if(head!=NULL){
    head->prev=n;
  }
  
  head=n;
}

// insert element at tail in linked list
void insertAtTail(node* &head, int val){
  if(head==NULL){
    insertAtHead(head, val);
    return;
  }
  
  node* n=new node(val);
  node* temp=head;
  
  while(temp->next!=NULL){
    temp=temp->next;
  }
  temp->next=n;
  n->prev=temp;
}

// display linked list 
void display(node* head){
  node* temp=head;
  while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
  }
  cout<<endl;
}

// deletion At head
void deletionAtHead(node* &head){
  node* to_delete=head;
  head=head->next;
  head->prev=NULL;
  
  delete to_delete;
}

// deletion linked list
void deletion(node* &head, int pos){
  if(pos==1){
    deletionAtHead(head);
    return;
  }
  
  node* temp=head;
  int count=0;
  
  while(temp!=NULL&&count!=pos){
    temp=temp->next;
    count++;
  }
  
  temp->prev->next=temp->next;
  
  if(temp->next!=NULL){
    temp->next->prev=temp->prev;
  }
  
  delete temp;
}

int main(){
  // initiation
  node* head=NULL;
  
  // insert At Tail
  insertAtTail(head,1);
  insertAtTail(head,2);
  insertAtTail(head,3);
  insertAtTail(head,4);
  insertAtTail(head,5);
  
  // display
  display(head);
  
  // insert At Head
  insertAtHead(head,20);
  display(head);
  
  // deletion at tail
  deletion(head, 5);
  display(head);
  
  // deletion at head
  deletionAtHead(head);
  display(head);
  
  deletion(head,1);
  display(head);
  return 0;
}