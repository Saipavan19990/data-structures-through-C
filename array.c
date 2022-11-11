/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

    #include<stdio.h>
    int main()
    {
        int size,i,a[4];
        printf("Enter the size of array ");
        scanf("%d",&size);
        printf("Enter the elements of array");
    //Enter the elements of array
        for(i=0;i<size;i++)
        {
            scanf("%d",&a[i]);
        }
        printf("print the values of arrays");
        for(i=0;i<size;i++)
        {
            printf("%d",a[i]);
        }
        
    }