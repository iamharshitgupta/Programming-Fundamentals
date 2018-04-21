#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
	int fahr, cels, step, max, temp;
	cin>>fahr>>max>>step;
	temp = fahr;
	for(fahr=temp;fahr<=max;fahr+=step)
	{
	    cels=(fahr-32)/1.8;
	    cout<<fahr<<"\t"<<cels<<endl;
	}
	return 0;
}
