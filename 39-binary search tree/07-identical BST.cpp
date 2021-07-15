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

// is identical BST
bool isIdentical(node* root1, node* root2){
  if(root1==NULL&&root2==NULL){
    return true;
  }
  
  else if(root1==NULL || root2==NULL){
    return false;
  }
  
  else{
    bool cond1=root1->data==root2->data;
    bool cond2=isIdentical(root1->left, root2->left);
    bool cond3=isIdentical(root1->right, root2->right);
    
    if(cond1&&cond2&&cond3){
      return true;
    }
    return false;
  }
}

int main(){
  /*
  
          12
         /  \
        9   15
       / \
      5   10
  */
  
  node* root=new node(12);
  root->left=new node(9);
  root->right=new node(15);
  root->left->left=new node(5);
  root->left->right=new node(10);
  
  /*
  
          12
         /  \
        8   15
       / \
      5   10
  */
  
  node* root3=new node(12);
  root3->left=new node(8);
  root3->right=new node(15);
  root3->left->left=new node(5);
  root3->left->right=new node(10);
  
  /*
         2
        / \
       1   3
  */
  
  node* root1=new node(2);
  root1->left=new node(1);
  root1->right=new node(3);
  
  /*
         5
        / \
       1   9
  */
  
  node* root2=new node(5);
  root2->left=new node(1);
  root2->right=new node(9);
  
  
  // if(isIdentical(root1, root1))
  // if(isIdentical(root1, root2))
  if(isIdentical(root1, root3))
    cout << "BSTs are identical" << endl;
  else 
    cout << "BSTs are not identical" << endl;
  
  return 0;
}