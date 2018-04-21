#include<iostream>
using namespace std;

int main() {
	// Write your code here

    int n;
    cin>>n;
    int i, j, temp;
    for(i=1;i<=n;++i)
    {
        for(j=1;j<=i;++j)
        {
            temp = i-1;
            if(i==1 || i==2)
            {
                cout<<"1";
            }
            else
            {
                if(j==1 || j==i)
                {
                    cout<<temp;
                }
                else
                {
                    cout<<"0";
                }
            }
        }
                    cout<<endl;
    }
}
