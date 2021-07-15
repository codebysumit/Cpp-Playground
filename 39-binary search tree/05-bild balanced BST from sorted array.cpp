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

node* sortedArrToBST(int arr[], int start, int end) {
  if(start>end){
    return NULL;
  }
  
  int mid=(start+end)/2;
  node* root=new node(arr[mid]);
  
  root->left=sortedArrToBST(arr, start, mid-1);
  
  root->right=sortedArrToBST(arr, mid+1, end);
  
  return root;
}

void preorder(node* root){
  if(root==NULL){
    return;
  }
  cout<<root->data<<" ";
  preorder(root->left);
  preorder(root->right);
}

int main(){
  
  int arr[]={10,20,30,40,50};
  
  node* root=sortedArrToBST(arr, 0, 4);
  
  preorder(root); cout<<"\n";
  
  return 0;
}