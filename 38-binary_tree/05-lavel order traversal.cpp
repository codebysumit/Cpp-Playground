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

void printLavelOrder(node* root){
  if(root==NULL){
    return;
  }
  
  queue<node*> q;
  q.push(root);
  q.push(NULL);
  
  while(!q.empty()){
    node* nodeptr=q.front();
    q.pop();
    if(nodeptr!=NULL){
      cout<<nodeptr->data<<" ";
      if(nodeptr->left)
        q.push(nodeptr->left);
      if(nodeptr->right)
        q.push(nodeptr->right);
    }
    else if(!q.empty())
      q.push(NULL);
  }
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

  printLavelOrder(root);

	return 0;
}