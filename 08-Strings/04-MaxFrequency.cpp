#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
  string str="dhfxgzdkgsgfffusff";
  
  int freq[26];// a-z,we have 26 character
  
  for (int i = 0; i < 26; i++) {
    freq[i]=0;
  }
  
  for (int i = 0; i < str.size(); i++) {
    freq[str[i]-'a']++;
  }
  
  // for (int i = 0; i < 26; i++) {
  //   cout<<freq[i]<<" ";
  // }
  
  char ans;
  int maxFreq=-1;
  
  for (int i = 0; i < 26; i++) {
    if(maxFreq<freq[i]){
      maxFreq=freq[i];
      ans='a'+i;
    }
  }
  
  cout << maxFreq << endl;
  cout << ans << endl;
  return 0;
}