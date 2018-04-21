#include<iostream>
using namespace std;

// Print name and average separated by space
int main() {

	// Write your code here
	char d;
	cin>>d;
	cout<<d<<" ";

	int a, b, c, arr[2], i=0;
	cin>>a>>b>>c;
	if(a>=b)
	{
	    if(b>c)
	    {
	        arr[i]=a;
	        ++i;
	        arr[i]=b;
	    }
	    else
	    {
	        arr[i]=a;
	        ++i;
	        arr[i]=c;
	    }
	}
	else if(c>a)
	{
	    if(a>b)
	    {
	        arr[i]=c;
	        ++i;
	        arr[i]=a;
	    }
	    else
	    {
	        arr[i]=c;
	        ++i;
	        arr[i]=b;
	    }
	}
	i=(arr[0]+arr[1])/2;
	cout<<i;
	return 0;
}
