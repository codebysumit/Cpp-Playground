#include "iostream"
using namespace std;

int main(){
/*
  //declaration and initiation character array
  char arr[5+1]="sumit";
  
  //output char array
  cout<<arr<<endll;
  
  //get output using loop
  int i=0;
  while (arr[i]!='\0'){
    cout<<arr[i];
    i++;
  }
  cout<<endll;
*/

/*
  int n;
  cin>>n;
  
  char arr2[n+1];
  
  //input char array
  cin>>arr2;
  
  //output char array
  cout<<arr2; 
*/

/*  
  char arr[5+1]="sumit";
  
  
  cout<<arr[0]<<endl;
  cout<<arr[1]<<endl;
  cout<<arr[2]<<endl;
  cout<<arr[3]<<endl;
  cout<<arr[4]<<endl;
  cout<<arr[5]<<endl;
*/


  int n;
  cin>>n;
  
  //declaration
  char arr[n+1];
  
  //input using loop
  for(int i=0; i<n; i++)
  	cin>>arr[i];
  cout<<endl;
  
  //output using loop
  for(int i=0; i<n; i++)
  	cout<<arr[i];

  return 0;
}