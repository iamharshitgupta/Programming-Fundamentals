#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
	int n;
	cin>>n;
	int i, j, temp=1;
	for(i=1;i<=n;++i)
	{
	    for(j=n;j>i;--j)
	    {
	        cout<<" ";
	    }
	    for(j=1;j<=temp;++j)
	    {
	        cout<<"*";
	    }
	    temp += 2;
	    cout<<endl;
	}
return 0;
}
