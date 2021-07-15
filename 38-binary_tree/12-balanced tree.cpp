#include <bits/stdc++.h>
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

/*
int hight(node* root){
  if(root==NULL){
    return 0;
  }
  int lh=hight(root->left);
  int rh=hight(root->right);
  return max(lh,rh)+1;
}

bool isBalaneced(node* root){
  if(root==NULL){
    return true;
  }
  
  if(isBalaneced(root->left)==false){
    return false;
  }
  
  if(isBalaneced(root->right)==false){
    return false;
  }
  
  int lh=hight(root->left);
  int rh=hight(root->right);
  
  if(abs(lh-rh)<=1){
    return true;
  }else{
    return false;
  }
}
*/

bool isBalaneced(node* root, int* hight){
  if(root==NULL){
    return true;
  }
  int lh=0, rh=0;
  if(isBalaneced(root->left, &lh)==false){
    return false;
  }
  if(isBalaneced(root->right, &rh)==false){
    return false;
  }
  *hight=max(lh,rh)+1;
  
  if(abs(lh-rh)<=1){
    return true;
  } else {
    return false;
  }
}

int main()
{
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
        /
       2
      /
     3
    /
   4

 */
  
  struct node* root2=new node(1);
  root2->left=new node(2);
  root2->left->left=new node(3);
  root2->left->left->left=new node(4);
  
  int hight=0;
  // if(isBalaneced(root))
  // if(isBalaneced(root2))
  if(isBalaneced(root2, &hight)==true)
    cout << "Balance tree" << endl;
  else
    cout << "Unbalance tree" << endl;
	return 0;
}