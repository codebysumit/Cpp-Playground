#include <iostream>
using namespace std;

int gcd(int a, int b){
  if(a==0)
    return b;
  return gcd(b%a,a);
}

int main() {
	int a,b;
	cin>>a>>b;
	
	int results=gcd(a,b);
	
	int ans1,ans2;
	
	int i=1;
	while(a!=ans1){
	  ans1=results*i;
	  i++;
	}
	
	int j=1;
	while(b!=ans2){
	  ans2=results*j;
	  j++;
	}
	cout<<i-1<<":"<<j-1<<endl;

	return 0;
}