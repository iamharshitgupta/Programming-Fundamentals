#include<iostream>
#include<math.h>
using namespace std;

int main() {
	// Write your code here
	float a,b,c;
	cin>>a>>b>>c;
	float ch=pow(b,2)-(4*a*c), x1, x2;
	int r1, r2;
	if(ch<0)
	{
	    cout<<"-1";
	}
	else if(ch==0)
	{
	    cout<<"0"<<endl;
	    x1=(-1*b/(2*a));
	    r1=round(x1);
	    cout<<r1<<" "<<r1;
	}
	else if(ch>0)
	{
	    cout<<"1"<<endl;
	    ch=pow(ch, 0.5);
	    x1=(-1*b+ch)/(2*a);
	    x2=(-1*b-ch)/(2*a);
	    r1=round(x1);
	    r2=round(x2);
	    cout<<r1<<" "<<r2;
	}
	return 0;
}
