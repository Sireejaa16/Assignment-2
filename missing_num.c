#include<stdio.h>
#include<stdlib.h>
int missingNum(int a[], int n)
{
    int i, total;
    total  = ((n+1)*(n))/2;   
    for ( i = 0; i< n; i++)
         total -= a[i];
    return total;
}
 
int main()
{
        int n;
        int *array;
        printf("Enter the no. of elements n");
        scanf("%d",&n);
        array=calloc(n,sizeof(int));
        printf("Enter the elements ");
        for(int i=0;i<n-1;i++)
        {
        scanf("%d",(array+i));
        }
        printf("The missing number is  %d", missingNum(array,n));
        return 0;
}
