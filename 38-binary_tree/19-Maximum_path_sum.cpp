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

int maxSumUtil(node* root, int &ans){
  if(root==NULL){
    return 0;
  }
  
  int left=maxSumUtil(root->left, ans);
  int right=maxSumUtil(root->right, ans);
  
  int nodeMax=max(max(root->data, root->data+left+right), 
              max(root->data+left, root->data+right));
  
  ans=max(ans, nodeMax);
  int singlePathSum=max(root->data, max(root->data+left, root->data+right));
  return singlePathSum;
}

int maxPathSum(node* root){
  int ans=INT_MIN;
  maxSumUtil(root, ans);
  return ans;
}

int main(){
/*

          1 
         / \ 
        2   3 
       /     \
      4       5

*/
  node* root=new node(1);
  root->left=new node(2);
  root->right=new node(3);
  root->left->left=new node(4);
  root->right->right=new node(5);
  
  cout << maxPathSum(root) << endl;
  return 0;
}