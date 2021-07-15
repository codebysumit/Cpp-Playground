#include<iostream>
using namespace std;

int LCM(int a, int b){
  int maxNum=max(a,b);
  
  while(true){
    if(maxNum%a==0&&maxNum%b==0)
      break;
    
    maxNum=maxNum+1;
  }
  
  return maxNum;
}


int main(){
  int a,b,c,d;
  
  cin>>c>>a;
  cin>>d>>b;
  
  cout<<c<<"/"<<a<<endl;
  cout<<d<<"/"<<b<<endl;
  cout<<endl;
  
  int lcm=LCM(a,b);
  
  
  int f1=(lcm/a)*c;
  int f2=(lcm/b)*d;
  
  cout<<"  "<<f1<<"-"<<f2<<endl;
  cout<<"------"<<endl;
  cout<<"   "<<lcm<<endl;
  cout<<endl;
  
  int ans=f1-f2;
  
  cout<<"  "<<ans<<endl;
  cout<<"----"<<endl;
  cout<<"  "<<lcm<<endl;
  
  
  return 0;
}