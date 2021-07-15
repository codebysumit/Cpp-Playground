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

// check BST
bool isBST(node* root, node* min=NULL, node* max=NULL) {
  if(root==NULL){
    return true;
  }
  
  if(min!=NULL && root->data<=min->data){
    return false;
  }
  
  if(max!=NULL && root->data>=max->data){
    return false;
  }
  
  bool leftValid=isBST(root->left, min, root);
  bool rightValid=isBST(root->right, root, max);
  
  return leftValid and rightValid;
}

int main(){
  /* binary valid search tree
          5
         / \ 
        2   8
  */
  
  node* root=new node(5);
  root->left=new node(2);
  root->right=new node(8);
  
  
  if(isBST(root, NULL, NULL)){
    cout << "It is a valid BST" << endl;
  } else {
    cout << "It is not a valid BST" << endl;
  }
  
  
  /* binary not valid search tree
          1
         / \ 
        2   3
  */
    
  node* root2=new node(1);
  root2->left=new node(2);
  root2->right=new node(3);
  
  if(isBST(root2, NULL, NULL)){
    cout << "It is a valid BST" << endl;
  } else {
    cout << "It is not a valid BST" << endl;
  }
  
  return 0;
}