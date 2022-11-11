/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j,temp;
    
    int a[7]={1,2,3,4,5,6,7};
// for traversal we need to traverse using 2 variables 
    for(i=0;i<7;i++)
    {
        for(j=i+1;j<7;j++)
        {
            if(a[j]>a[i])           //DESCENDING ORDER
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
                
            }
        }
    }
        printf("sorted elements are");
        
        for(i=0;i<7;i++)
        {
            printf("%d",a[i]);
        }

    return 0;
}
