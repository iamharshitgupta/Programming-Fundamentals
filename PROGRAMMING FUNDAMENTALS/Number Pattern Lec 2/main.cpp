#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
	int n;
	cin>>n;
	int i, j, temp;
	for(i=1;i<=n;++i)
	{
	    for(j=n;j>i;--j)
	    {
	        cout<<" ";
	    }
	    temp = i;
	    for(j=1;j<=i;++j)
	    {
	        cout<<temp;
	        ++temp;
	    }
	    cout<<endl;
	}
  return 0;

}
