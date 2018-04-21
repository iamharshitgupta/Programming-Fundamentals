#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n;
	cin>>n;

	int factor=1, temp=n, k=0, arr[100], i, sume=0, sumo=0;
	while(temp)
	{
	    temp = temp/10;
	    factor=factor*10;
	}
	while(factor>1)
	{
	    factor=factor/10;
	    arr[k]=n/factor;
      ++k;
	    n=n%factor;
	}

  for(i=0;i<k;++i)
  {
    if(arr[i]%2==0)
    {
      sume=sume+arr[i];
    }
    else
    {
      sumo=sumo+arr[i];
    }
  }
  cout<<sume<<"     "<<sumo<<endl;
	return 0;
}
