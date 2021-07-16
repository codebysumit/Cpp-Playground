#include "iostream"
using namespace std;

int main(){
  //row and columns are sorted order
  int mat[4][4]={
                  {1, 4, 7, 11},
                  {2, 5, 8, 12},
                  {3, 6, 9, 16},
                  {10, 13, 14, 17}
                };
  
  int key=9;

  //Linear search in a 2D Array
  bool found=false;
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      if(mat[i][j]==key){
        cout<<i<<" "<<j<<endl;
        found=true;
      }
    }
  }
  //Time complexity : O(N*M)


  if(found){
    cout<<"Elements are found"<<endl;
  } else {
    cout<<"Elements are not found"<<endl;
  }
  
  return 0;
}