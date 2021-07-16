#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<set>
#include<map>
#include<unordered_map>
#include<string>
#include<stack>
using namespace std;

// #define int long long
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
#define setBit(x) builtin_popcount(x)

struct node{
  int key;
  node *left, *right;
};

node* newNode(int val){
  node* Node=new node;
  Node->key=val;
  Node->left=Node->right=NULL;
  return Node;
}

void getVarticalOrder(node* root, int hdis, map<int, vi> &m){
  if(root==NULL)
    return;
  
  m[hdis].push_back(root->key);
  getVarticalOrder(root->left, hdis-1, m);
  getVarticalOrder(root->right, hdis+1, m);
}

signed main(){
  node* root=newNode(10);
  root->left=newNode(7);
  root->right=newNode(4);
  root->left->left=newNode(3);
  root->left->right=newNode(11);
  root->right->left=newNode(14);
  root->right->right=newNode(6);
  
  map<int, vector<int>> m;
  int hdis=0;
  
  getVarticalOrder(root, hdis, m);
  
  map<int, vi> :: iterator it;
  
  for (it=m.begin(); it!=m.end(); it++) {
    for (int i = 0; i < (it->ss).size(); i++) {
      cout<<(it->ss)[i]<<" ";
    }
    cout<<endl;
  }
  
  return 0;
}