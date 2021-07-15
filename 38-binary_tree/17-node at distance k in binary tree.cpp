#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node *left;
	struct node *right;

	node(int val)
	{
		data = val;
		left = NULL;
		right = NULL;
	}
};

// case 1
void printSubtreeNode(node* root, int k){
  if(root==NULL||k<0){
    return;
  }
  if(k==0){
    cout<<root->data<<" ";
    return;
  }
  printSubtreeNode(root->left, k-1);
  printSubtreeNode(root->right, k-1);
}

// case 2
int printNoteAt(node* root, node* terget, int k){
  if(root==NULL){
    return -1;
  }
  
  if(root==terget){
    printSubtreeNode(root,k);
    return 0;
  }
  
  int dl=printNoteAt(root->left, terget, k);
  if(dl!=-1){
    if(dl+1==k){
      cout<<root->data<<" ";
    }
    else{
      printSubtreeNode(root->right, k-dl-2);
    }
    return 1+dl;
  }
  
  int dr=printNoteAt(root->right, terget, k);
  if(dr!=-1){
    if(dr+1==k){
      cout<<root->data<<" ";
    }
    else{
      printSubtreeNode(root->left, k-dr-2);
    }
    return 1+dr;
  }
  
  return -1;
}

int main(){
  
  /*
          1
        /   \
       2     3
      / \   / \
     4   5 6   7
  */
	struct node *root = new node(1);
	
	root->left = new node(2);
	root->right = new node(3);
	
	root->left->left = new node(4);
	root->left->right = new node(5);
	
	root->right->left = new node(6);
	root->right->right = new node(7);
	
  
  /*
          1
        /   \
       2     3
      / 
     4 
  */
	
	struct node *root2 = new node(1);
	
	root2->left = new node(2);
	root2->right = new node(3);
	root2->left->left = new node(4);
	
	printNoteAt(root2, root2->left, 1);
	cout<<endl;
  return 0;
}
