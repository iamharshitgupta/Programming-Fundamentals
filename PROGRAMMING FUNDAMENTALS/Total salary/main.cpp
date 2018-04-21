#include<iostream>
#include<math.h>
using namespace std;

int main() {
	// Write your code here
	float s;
	char g;
	cin>>s>>g;
	int f;
	float hra=20*s/100, da=50*s/100, allow, pf=11*s/100;
	if(g=='A')
	{
	    allow=1700;
	}
	else if(g=='B')
	{
	    allow = 1500;
	}
	else if(g>='C' || g<='Z')
	{
	    allow=1300;
	}
	float sum=0;
	sum = s+hra+da+allow-pf;
	f=round(sum);

	cout<<f;
	return 0;
}
