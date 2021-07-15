#include "iostream"
using namespace std;
int main()
{
  int n;
  cin>>n;
  
	char arr[n + 1];
	cin>>arr;
	
	for (int i = 0; i < n/2; i++)
	{
		char temp = arr[i];
		arr[i]=arr[n-1-i];
		arr[n-1-i]=temp;
	}

	cout << arr;
	return 0;
}