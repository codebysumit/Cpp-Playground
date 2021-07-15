#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<string>
using namespace std;

// #define int long long
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff frist
#define ss second
#define setBit(x) builtin_popcount(x)

// Max heaps
priority_queue<int, vector<int>> pqmax;
// Min heaps
priority_queue<int, vector<int>, greater<int>> pqmin;

void insert(int x){
  if(pqmin.size()==pqmax.size()){
    if(pqmax.size()==0){
      pqmax.push(x);
      return;
    }
    if(x<pqmax.top()){
      pqmax.push(x);
    }
    else{
      pqmin.push(x);
    }
  }
  else{
    {
      // two cases
      // size of maxHeaps > size of minHeaps
      // size of maxHeaps < size of minHeaps
      
      if(pqmin.size()<pqmax.size()){
        if(x>=pqmax.top()){
          pqmin.push(x);
        }
        else{
          int temp=pqmax.top();
          pqmax.pop();
          pqmin.push(temp);
          pqmax.push(x);
        }
      }
      else{
        if(x<=pqmin.top()){
          pqmax.push(x);
        }
        else{
          int temp=pqmin.top();
          pqmin.pop();
          pqmax.push(temp);
          pqmin.push(x);
        }
      }
    }
  }
}

double findMediam(){
  if(pqmin.size()==pqmax.size()){
    return (pqmin.top()+pqmax.top())/2.0;
  }
  else if(pqmax.size()>pqmin.size()){
    return pqmax.top();
  }
  else{
    return pqmin.top();
  }
}

signed main(){
  
  insert (10);
  cout<<findMediam()<<endl;
  
  insert (15);
  cout<<findMediam()<<endl;
  
  insert (21);
  cout<<findMediam()<<endl;
  
  insert (30);
  cout<<findMediam()<<endl;
  
  insert (18);
  cout<<findMediam()<<endl;
  
  insert (19);
  cout<<findMediam()<<endl;
  
  return 0;
}

// push= O(log n)
// pop= O(log n)
// top= O(1)
// size= O(1)