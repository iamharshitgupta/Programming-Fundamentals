#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
	int n;
	cin>>n;
	int i, j=1, temp=1;
	for(i=1;i<=n;++i)
	{
	    temp = i;
	    for(j=1;j<=i;++j)
	    {
	        cout<<temp;
	        ++temp;
	    }
	    cout<<endl;
	}
}
