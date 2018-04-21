#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int i, j, a=1;
	int n;
	cin>>n;
	for(i=1;i<=n;++i)
	{
	    for(j=1;j<=i;++j)
	    {
	        cout<<a;
	    }
	    cout<<endl;
	}
	return 0;
}
