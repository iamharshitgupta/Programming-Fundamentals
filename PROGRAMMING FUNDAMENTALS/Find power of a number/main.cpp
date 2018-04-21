#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int x, n;
	cin>>x>>n;

	int i, a=x;
	for(i=1;i<n;++i)
	{
	    a = a*x;
	}
	if(n==0)
	{
	    cout<<"1";
	}
	else
	{
	    cout<<a;
	}
	return 0;
}
