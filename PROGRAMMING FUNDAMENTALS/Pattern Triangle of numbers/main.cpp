#include <iostream>
using namespace std;

int main() {
    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */


     int n;
     scanf("%i", &n);

     int i=1, j, temp=1;

     while(i<=n)
     {
         for(j=n;j>i;--j)
         {
             printf(" ");
         }
         for(j=i;j<=temp;++j)
         {
             printf("%i", j);
         }
         for(j=temp-1;j>=i;--j)
         {
             printf("%i", j);
         }
         temp += 2;
         printf("\n");
         ++i;
     }
}
