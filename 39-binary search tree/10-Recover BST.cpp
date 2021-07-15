#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node *left, *right;

	node(int val)
	{
		data = val;
		left = NULL;
		right = NULL;
	}
};

void swap(int *a, int *b){
  int temp=*a;
  *a=*b;
  *b=temp;
}

void calcPointers(node* root, node** frist, node** mid, node** last, node** prev){
  if(root==NULL){
    return ;
  }
  calcPointers(root->left, frist, mid, last, prev);
  
  if(*prev&&root->data<(*prev)->data){
    if(!*frist){
      *frist=*prev;
      *mid=root;
    }
    else{
      *last=root;
     }
  }
  *prev=root;
  calcPointers(root->right, frist, mid, last, prev);
}

void restoreBST(node* root){
  node *frist, *mid, *last, *prev;
  frist=NULL;
  mid=NULL;
  last=NULL;
  prev=NULL;
  
  calcPointers(root, &frist, &mid, &last, &prev);
  
  // case 1
  if(frist && last) {
    swap(&(frist->data), &(last->data));
  }
  // case 2
  else if(frist && mid) {
    swap(&(frist->data), &(mid->data));
  }
}

void inorder(node* root){
  if(root==NULL)
    return;
  
  inorder(root->left);
  cout<<root->data<<" ";
  inorder(root->right);
}

int main(){
  
   /* Let us construct the following Tree 
           6 
        /     \ 
       9       3 
      /  \       \ 
     1    4       13 
    */
  
  node *root = new node(6); 
  
    root->left = new node(9); 
    root->right = new node(3); 
    
    root->left->left = new node(1); 
    root->left->right = new node(4); 
    
    root->right->right = new node(13); 

  
  inorder(root);
  cout << endl;
  
  restoreBST(root);
  
  inorder(root);
  cout << endl;
  return 0;
}