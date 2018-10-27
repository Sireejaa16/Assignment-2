//Given  an  array of n numbers.Give  an  algorithm  for  checking  whether  there  are  any duplicated elements in the array or not?
#include<stdio.h>
#include<stdlib.h>

void printRepeat(int arr[], int size)                                                            //Function to check for duplicate elements
 {
   int *count = (int *)calloc(sizeof(int), (size - 2));                                          // array to store all elements as a counter
   int i;
   int counter =0;
   for(i = 0; i < size; i++)
          {
             if(count[arr[i]] == 1)                                                              // If the element is already present in the counter then it id duplicate
                  {
                           printf("There is a duplicate element whose value is  %d\n ", arr[i]);
                           counter++;
                  }
                else
                           count[arr[i]]++;
          }
   if(counter==0)
             printf("There are no duplicate elements in the given array");
   else
             printf("There are %d duplicate elements in the given array",counter);
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
        printRepeat(array,n);
        return 0;
}

                                                                                                                                                                                                          
                                                                                                                                                                                                           
                                                                                                                                                                                                           
                                                                                                                                                                                                           
                                                                                                                                                                                                           
                          
