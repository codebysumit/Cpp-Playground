#include "iostream"
using namespace std;

int main(){
  //row and columns are sorted order
  //mat[n][m]
  int mat[4][4]={
                  {1, 4, 7, 11},
                  {2, 5, 8, 12},
                  {3, 6, 9, 16},
                  {10, 13, 14, 17}
                };
  
  int terget=9;
  
  bool flag=false;
  //row = 0, col = n - 1
  int row=0,col=4-1;// terget mat[0][3]
  while(row<4 && col>=0){//row<n && col>=0
    if(mat[row][col]==terget){
      cout<<row<<" "<<col<<endl;
      flag=true;
    }
    
    if(mat[row][col]>terget)
      col--;
    else
      row++;
  }
  
  if(flag){
    cout<<"Elements are found"<<endl;
  } else {
    cout<<"Elements are not found"<<endl;
  }
  
  return 0;
}