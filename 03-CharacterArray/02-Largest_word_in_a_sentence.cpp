#include "iostream"
using namespace std;

int main(){
  
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  
  int n;
  cin>>n;
  cin.ignore();
  char arr[n+1];
  
  cin.getline(arr, n);
  cin.ignore();
  
  int i=0;
  int currLen=0, maxLen=0;
  int st=0, maxSt=0;
  
  while(1){
    if(arr[i]==' ' || arr[i]=='\0'){
      if(currLen>maxLen){
        maxLen=currLen;
        maxSt=st;
      }
      currLen=0;
      st=1+i;
    } 
    else
    {
      currLen++;
    }
    
    if(arr[i] == '\0')
      break;
      
    i++;
  }
  cout<<arr<<endl;
  cout<<maxLen<<endl;
  for (int i = 0; i < maxLen; i++)
    cout<<arr[i+maxSt];
  cout << endl;
  
  return 0;
}