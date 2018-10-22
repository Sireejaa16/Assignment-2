//Let A be an array of n distinct integers.Suppose A has the following property:there exists an index 1≤k≤n such that A[1],.,A[k]is an increasing sequence and A[k+1],...,A[n]is a decreasing sequence.Desig//an algorithm for finding k.
#include<stdio.h>
#include<stdlib.h>
int find(int arr[],int size)
{
 int k=0;
 for(int i=1;i<size;i++)
 {
  if((arr[i]>arr[i-1])&&(arr[i]>arr[i+1]))
		  k=i;
 }
  return k;
}

int main()
	
 {
        int n;
        int *array;
        printf("Enter the no. of elements");
        scanf("%d",&n);
        array=calloc(n,sizeof(int));
        printf("Enter the elements ");
        for(int i=0;i<n;i++)
        {
        scanf("%d",(array+i));
        }
        printf("%d is The kth position is ",find(array,n));
        return 0;

    
}
