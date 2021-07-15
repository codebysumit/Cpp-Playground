#include<iostream>
using namespace std;

class node{
  public:
  int data;
  node* next;
  
  // constructor
  node(int value){
    data=value;
    next=NULL;
  }
};

// insert At Head
void insertAtHead(node* &head, int value){
  node* n=new node(value);
  n->next=head;
  head=n;
}

// insert At Tail
void insertAtTail(node* &head, int value){
  node* n=new node(value);
  
  if(head==NULL){
    head=n;
    return;
  }
  
  node* temp=head;
  while(temp->next!=NULL){
    temp=temp->next;
  }
    temp->next=n;
}

// print the node
void display(node* head){
  node* temp=head;
  while(temp!=NULL){
    cout<<temp->data<<"->";
    temp=temp->next;
  }
  cout<<"NULL"<<endl;
}

// searching node in linklist
bool search(node* head, int key){
  node* temp=head;
  while(temp!=NULL){
    if(temp->data==key){
      return true;
    }
    temp=temp->next;
  }
  return false;
}

// delete at head in linked list
void deleteAtHead(node* &head, int value){
  node* todeletet=head;
  if(head->data==value){
    head=head->next;
    delete todeletet;
  }
}

// deletion in linked list
void deletion(node* &head, int value){
  if(head==NULL){
    return;
  }
  
  if(head->next==NULL){
    deleteAtHead(head,value);
    return;
  }
  
  if(head->data==value){
    node* deletetHead=head;
    
    head=head->next;
    delete deletetHead;
    return;
  }
  
  node* temp=head;
  
  while(temp->next->data!=value){
    temp=temp->next;
  }
  node* todeletet=temp->next;
  temp->next=temp->next->next;
  
  delete todeletet;
}

// reverse link list
node* reverse(node* &head){
  node* prevptr=NULL;
  node* currptr=head;
  node* nextptr;
  
  while(currptr!=NULL){
    nextptr=currptr->next;
    currptr->next=prevptr;
    
    prevptr=currptr;
    currptr=nextptr;
  }
  return prevptr;
}

// reverse link list recursively
node* reverseRecursive(node* &head){
  if(head==NULL||head->next==NULL){
    return head;
  }
  
  node* newhead=reverseRecursive(head->next);
  head->next->next=head;
  head->next=NULL;
  
  return newhead;
}

// reverse k in recursion
node* reversek(node* &head, int k){
  
  node* prevptr=NULL;
  node* currptr=head;
  node* nextptr;
  
  int count=0;
  while(currptr!=NULL&&count<k){
    nextptr=currptr->next;
    currptr->next=prevptr;
    prevptr=currptr;
    currptr=nextptr;
    count++;
  }
  if(nextptr!=NULL){
    head->next=reversek(nextptr,k);
  }
  return prevptr;
}

// make cycle in Linked list
void makeCycle(node* &head, int pos){
  node* temp=head;
  node* startNode;
  
  int count=0;
  while(temp->next!=NULL){
    
    if(count==pos){
      startNode=temp;
    }
    temp=temp->next;
    count++;
  }
  temp->next=startNode;
}

// Detection cycle in Linked list
bool detectCycle(node* &head){
  node* slow=head;
  node* fast=head;
  
  while(fast!=NULL&&fast->next!=NULL){
    slow=slow->next;
    fast=fast->next->next;
    
    if(fast==slow){
      return true;
    }
  }
  return false;
}

// remove cycle in linked list
void removeCycle(node* &head){
  node* slow=head;
  node* fast=head;
  
  do
  {
    slow=slow->next;
    fast=fast->next->next;
  } while(slow!=fast);
  
  fast=head;
  while(slow->next!=fast->next){
    slow=slow->next;
    fast=fast->next;
  }
  slow->next=NULL;
}

// get length of linked list
int length(node* head){
  int l=0;
  node* temp=head;
  
  while(temp!=NULL){
    l++;
    temp=temp->next;
  }
  return l;
}

// intersec 2 linked list
void intersec(node* &head1, node* &head2, int pos){
  node* temp1=head1;
  pos--;
  while(pos--){
    temp1=temp1->next;
  }
  
  node* temp2=head2;
  while(temp2->next!=NULL){
    temp2=temp2->next;
  }
  temp2->next=temp1;
}

// append last k nodes to start of linked list
node* kappend(node* &head, int k){
  node* newHead;
  node* newTail;
  node* tail=head;
  
  int l=length(head);
  int count=1;
  k=k%l;
  
  while(tail->next!=NULL){
    if(count==l-k){
      newTail=tail;
    }
    if(count==l-k+1){
      newHead=tail;
    }
    tail=tail->next;
    count++;
  }
  
  newTail->next=NULL;
  tail->next=head;
  
  return newHead;
}

// find intersection point of 2 linked list
int intersection(node* &head1, node* &head2){
  int l1=length(head1);
  int l2=length(head2);
  
  int d=0;
  node* ptr1;
  node* ptr2;
  
  if(l1>l2){
    d=l1-l2;
    ptr1=head1;
    ptr2=head2;
  }else{
    d=l2-l1;
    ptr1=head2;
    ptr2=head1;
  }
  
  while(d--){
    ptr1=ptr1->next;
    if(ptr1==NULL){
      return -1;
    }
  }
  
  while(ptr1!=NULL&&ptr2!=NULL){
    if(ptr1==ptr2){
      return ptr1->data;
    }
    
    ptr1=ptr1->next;
    ptr2=ptr2->next;
  }
  return -1;
}

// marge 2 sorted linked list
node* marge(node* head1, node* head2){
  node* p1=head1;
  node* p2=head2;
  node* dummyNode=new node(-1);
  node* p3=dummyNode;
  
  while(p1!=NULL&&p2!=NULL){
    if(p1->data<p2->data){
      p3->next=p1;
      p1=p1->next;
    }
    else{
      p3->next=p2;
      p2=p2->next;
    }
    p3=p3->next;
  }
  
  while(p1!=NULL){
    p3->next=p1;
    p1=p1->next;
    p3=p3->next;
  }
  
  while(p2!=NULL){
    p3->next=p2;
    p2=p2->next;
    p3=p3->next;
  }
  return dummyNode->next;
}

// marge 2 sorted recursively linked list
node* margeRecursive(node* &head1, node* &head2){
  if(head1==NULL){
    return head2;
  }
  
  if(head2==NULL){
    return head1;
  }
  
  node* result;
  if(head1->data<head2->data){
    result=head1;
    result->next=margeRecursive(head1->next,head2);
  }
  else{
    result=head2;
    result->next=margeRecursive(head1,head2->next);
  }
  return result;
}

// put even position node after odd position node
void evenAfterOdd(node* &head){
  node* odd=head;
  node* even=head->next;
  node* evenStart=even;
  
  while(odd->next!=NULL&&even->next!=NULL){
    odd->next=even->next;
    odd=odd->next;
    
    even->next=odd->next;
    even=even->next;
  }
  odd->next=evenStart;
  
  if(odd->next!=NULL){
    even->next=NULL;
  }
}

int main(){
  
  // put even position node after odd position node
  node* head=NULL;
  int arr[]={1,2,3,4,5,6};
  
  for (int i = 0; i < 6; i++) {
    insertAtTail(head,arr[i]);
  }
  display(head);
  evenAfterOdd(head);
  display(head);
  
  
  // marge 2 sorted linked list
  // node* head1=NULL;
  // node* head2=NULL;
  // int arr1[]={1,4,5,7};
  // int arr2[]={2,3,6};
  // for (int i = 0; i < 4; i++) {
  //   insertAtTail(head1,arr1[i]);
  // }
  
  // for (int i = 0; i < 3; i++) {
  //   insertAtTail(head2,arr2[i]);
  // }
  
  // display(head1);
  // display(head2);
  
  // // node* newHead=marge(head1,head2);
  // node* newHead=margeRecursive(head1,head2);
  // display(newHead);
  
  // find intersection point of 2 linked list
  // node* head=NULL;
  // node* head2=NULL;
  
  // insertAtTail(head,1);
  // insertAtTail(head,2);
  // insertAtTail(head,3);
  // insertAtTail(head,4);
  // insertAtTail(head,5);
  // insertAtTail(head,6);
  // insertAtTail(head2,9);
  // insertAtTail(head2,10);
  // intersec(head,head2,3);
  // display(head);
  // display(head2);
  // cout<<intersection(head,head2)<<endl;

  // declaration of linked list
  // node* head=NULL; // declaration link list
  
  // // initiation value at lail in link list
  // insertAtTail(head,1);
  // insertAtTail(head,2);
  // insertAtTail(head,3);
  // insertAtTail(head,4);
  // insertAtTail(head,5);
  // insertAtTail(head,6);
  // insertAtTail(head,7);
  // insertAtTail(head,8);
  // display(head);
  
  // get length of linked list
  // cout<<length(head)<<endl;
  
  // append last k nodes to start of linked list
  // node* newHead=kappend(head,4);
  // display(newHead);
  
  // initiation value at head in link list
  // insertAtHead(head,45);
  // display(head);
 
  // search an element from link list
  // cout<<search(head,8)<<endl;
  // cout<<search(head,4)<<endl;
  
  // delete linklist element
  // deletion(head,3);
  // display(head);
  
  // delete linklist frist element
  // deleteAtHead(head,45);
  // display(head);
  
  // upgrade deletion function
  // deletion(head,1);
  // display(head);
  
  // reverse linklist elements
  // node* newhead=reverse(head);
  // display(newhead);
  
  // reverse linklist elements using recursion
  // node* newhead=reverseRecursive(head);
  // display(newhead);
  
  // reverse k in linklist
  // node* newhead=reversek(head,2);
  // display(newhead);
  
  // // make cycle in linklist
  // makeCycle(head,3);
  // // display(head);
  
  // // detected cycle in linklist
  // cout<<detectCycle(head)<<endl;
  
  // //remove cycle in link list
  // removeCycle(head);
  // display(head);
  // cout<<detectCycle(head)<<endl;
  
  return 0;
}