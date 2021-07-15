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

struct info
{
  int size;
  int max;
  int min;
  int ans;
  bool isBST;
};

info largestBSTinBT(node* root){
  if(root==NULL){
    return {0, INT_MIN, INT_MAX, 0, true};
  }
  
  if(root->left==NULL && root->right==NULL){
    return {1, root->data, root->data, 1, true};
  }
  
  info leftinfo=largestBSTinBT(root->left);
  info rightinfo=largestBSTinBT(root->right);
  
  info curr;
  curr.size=(1+leftinfo.size+rightinfo.size);
  
  if(leftinfo.isBST && rightinfo.isBST && leftinfo.max<root->data && rightinfo.min>root->data){
     curr.min=min(leftinfo.min, min(rightinfo.min, root->data));
     curr.max=max(rightinfo.max, max(leftinfo.max, root->data));
     
     curr.ans=curr.size;
     curr.isBST=true;
     
     return curr;
   }
   
   curr.ans=max(leftinfo.ans, rightinfo.ans);
   curr.isBST=false;
   
   return curr;
}

int main(){
  /*
  
          15
         /  \
        20   30
       /
      5
  */
  
  // node* root=new node(15);
  // root->left=new node(20);
  // root->right=new node(30);
  // root->left->left=new node(5);
  
  
   /* Let us construct the following Tree 
           50 
        /     \ 
       10      60 
      /  \    /  \ 
     5   20  55   70 
            /    /  \ 
           45   65  80 
    */
  
  node *root = new node(50); 
    root->left = new node(10); 
    root->right = new node(60); 
    root->left->left = new node(5); 
    root->left->right = new node(20); 
    root->right->left = new node(55); 
    root->right->left->left = new node(45); 
    root->right->right = new node(70); 
    root->right->right->left = new node(65); 
    root->right->right->right = new node(80); 

  
  
  cout << "Largest BST in BT: " << largestBSTinBT(root).ans<< endl;
  
  return 0;
}