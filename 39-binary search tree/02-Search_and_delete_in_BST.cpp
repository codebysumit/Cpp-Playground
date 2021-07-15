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


// node* searchBST(node* root, int key){
//   if(root==NULL){
//     return NULL;
//   }
  
//   if(root->data==key){
//     return root;
//   }
  
//   // data>key
//   if(root->data>key){
//     return searchBST(root->left, key);
//   }
  
//   // data<key
//   /*if(root->data<key){
//     return searchBST(root->right, key);
//   }*/
//   return searchBST(root->right, key);
// }


node* inorderSecc(node* root){
  node* curr=root;
  while(curr&&curr->right!=NULL){
    curr=curr->left;
  }
  return curr;
}

node* deleteInBst(node* root, int key){
  
  if(key<root->data){
    root->left=deleteInBst(root->left, key);
  }
  else if(key>root->data){
    root->right=deleteInBst(root->right, key);
  }
  else{
    // case 1
    if(root->left==NULL){
      node* temp=root->right;
      free(root);
      return temp;
    }
    // case 2
    else if(root->right==NULL){
      node* temp=root->left;
      free(root);
      return temp;
    }
    node* temp=inorderSecc(root->right);
    root->data=temp->data;
    root->right=deleteInBst(root->right, temp->data);
  }
  return root;
}

void inorder(node* root){
  if(root==NULL)
    return;
  inorder(root->left);
  cout<<root->data<<" ";
  inorder(root->right);
}

int main(){
    /* binary search tree
            4
           / \ 
          2   5
         / \   \
        1  3    6
    */
  
  node* root=new node(4);
  root->left=new node(2);
  root->right=new node(5);
  root->left->left=new node(1);
  root->left->right=new node(3);
  root->right->right=new node(6);
  
  /*
  // node* ans=searchBST(root, 3);
  node* ans=searchBST(root, 8);
  if(ans==NULL){
    std::cout << "key doesn't exist" << std::endl;
  }
  else{
    std::cout << ans->data << std::endl;
  }
  */
  
  inorder (root);
  cout<<endl;
  
  // root = deleteInBst(root, 5);
  root = deleteInBst(root, 2);
  
  inorder (root);
  cout<<endl;
  
  return 0;
}