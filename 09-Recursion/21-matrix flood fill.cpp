#include<iostream>
using namespace std;

void floodFill(int *arr, int m, int n, int row, int col, int toFill, int prevFill){
  if(row<0||row>=m||col<0||col>=n){
    return;
  }
  if(*((arr+row*n)+col)!=prevFill){
    return;
  }
  *((arr+row*n)+col)=toFill;
  
  floodFill((int *)arr, m, n, row-1, col, toFill, prevFill);
  floodFill((int *)arr, m, n, row, col-1, toFill, prevFill);
  floodFill((int *)arr, m, n, row+1, col, toFill, prevFill);
  floodFill((int *)arr, m, n, row, col+1, toFill, prevFill);
}
int main(){
  int arr[6][6]={
                  {1,1,2,2,2,1},
                  {1,2,2,2,1,1},
                  {1,1,2,2,1,1},
                  {1,2,2,1,1,1},
                  {1,1,2,1,1,2},
                  {1,1,1,1,1,1}
                };

for (int i = 0; i < 6; i++) {
  for (int j = 0; j < 6; j++) {
    cout << arr[i][j] << " ";
  }
  cout << endl;
}

floodFill((int *)arr,6,6,0,0,6,1);

cout << endl;

for (int i = 0; i < 6; i++) {
  for (int j = 0; j < 6; j++) {
    cout << arr[i][j] << " ";
  }
  cout << endl;
}
  return 0;
}