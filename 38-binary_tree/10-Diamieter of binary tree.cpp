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
int calheight(node* root){
  if(root==NULL){
    return 0;
  }
  int lheight=calheight(root->left);
  int rheight=calheight(root->right);
  return max(lheight,rheight)+1;
}

int calDiameter(node* root){
  if(root==NULL){
    return 0;
  }
  
  int lheight=calheight(root->left);
  int rheight=calheight(root->right);
  
  int currDiameter=lheight+rheight+1;
  
  int lDiameter=calDiameter(root->left);
  int rDiameter=calDiameter(root->right);
  
  return max(currDiameter,max(lDiameter,rDiameter));
}
*/
int calDiameter(node* root, int* height){
  if(root==NULL){
    *height=0;
    return 0;
  }
  
  int lh=0, rh=0;
  
  int lDiameter=calDiameter(root->left, &lh);
  int rDiameter=calDiameter(root->right, &rh);
  
  int currDiameter=lh+rh+1;
  
  *height=max(lh,rh)+1;
  
  return max(currDiameter,max(lDiameter,rDiameter));
}

int main()
{
	struct node *root = new node(1);
	
	root->left = new node(2);
	root->right = new node(3);
	
	root->left->left = new node(4);
	root->left->right = new node(5);
	
	root->right->left = new node(6);
	root->right->right = new node(7);

  // cout<<calDiameter(root)<<endl;
  int height=0;
  cout<<calDiameter(root, &height)<<endl;
  

	return 0;
}